// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Misc/Guid.h"
#include "UObject/Class.h"
#include "WebCefJSFunction.generated.h"

class FWebCefJSScripting;

struct CEFBROWSER_API FWebCefJSParam
{

	struct CEFBROWSER_API IStructWrapper
	{
		virtual ~IStructWrapper();
		virtual UStruct* GetTypeInfo() = 0;
		virtual const void* GetData() = 0;
		virtual IStructWrapper* Clone() = 0;
	};

	template <typename T> struct FStructWrapper
		: public IStructWrapper
	{
		T StructValue;
		FStructWrapper(const T& InValue)
			: StructValue(InValue)
		{}
		virtual ~FStructWrapper()
		{}
		virtual UStruct* GetTypeInfo() override
		{
			return T::StaticStruct();
		}
		virtual const void* GetData() override
		{
			return &StructValue;
		}
		virtual IStructWrapper* Clone() override
		{
			return new FStructWrapper<T>(StructValue);
		}
	};

	FWebCefJSParam();
	FWebCefJSParam(bool Value);
	FWebCefJSParam(int8 Value);
	FWebCefJSParam(int16 Value);
	FWebCefJSParam(int32 Value);
	FWebCefJSParam(uint8 Value);
	FWebCefJSParam(uint16 Value);
	FWebCefJSParam(uint32 Value);
	FWebCefJSParam(int64 Value);
	FWebCefJSParam(uint64 Value);
	FWebCefJSParam(double Value);
	FWebCefJSParam(float Value);
	FWebCefJSParam(const FString& Value);
	FWebCefJSParam(const FText& Value);
	FWebCefJSParam(const FName& Value);
	FWebCefJSParam(const TCHAR* Value);
	FWebCefJSParam(UObject* Value);
	template <typename T> FWebCefJSParam(const T& Value,
		typename TEnableIf<!TIsPointer<T>::Value, UStruct>::Type* InTypeInfo=T::StaticStruct())
		: Tag(PTYPE_STRUCT)
		, StructValue(new FStructWrapper<T>(Value))
	{}
	template <typename T> FWebCefJSParam(const TArray<T>& Value)
		: Tag(PTYPE_ARRAY)
	{
		ArrayValue = new TArray<FWebCefJSParam>();
		ArrayValue->Reserve(Value.Num());
		for(T Item : Value)
		{
			ArrayValue->Add(FWebCefJSParam(Item));
		}
	}
	template <typename T> FWebCefJSParam(const TMap<FString, T>& Value)
		: Tag(PTYPE_MAP)
	{
		MapValue = new TMap<FString, FWebCefJSParam>();
		MapValue->Reserve(Value.Num());
		for(const auto& Pair : Value)
		{
			MapValue->Add(Pair.Key, FWebCefJSParam(Pair.Value));
		}
	}
	template <typename K, typename T> FWebCefJSParam(const TMap<K, T>& Value)
		: Tag(PTYPE_MAP)
	{
		MapValue = new TMap<FString, FWebCefJSParam>();
		MapValue->Reserve(Value.Num());
		for(const auto& Pair : Value)
		{
			MapValue->Add(Pair.Key.ToString(), FWebCefJSParam(Pair.Value));
		}
	}
	FWebCefJSParam(const FWebCefJSParam& Other);
	FWebCefJSParam(FWebCefJSParam&& Other);
	~FWebCefJSParam();

	enum { PTYPE_NULL, PTYPE_BOOL, PTYPE_INT, PTYPE_DOUBLE, PTYPE_STRING, PTYPE_OBJECT, PTYPE_STRUCT, PTYPE_ARRAY, PTYPE_MAP } Tag;
	union
	{
		bool BoolValue;
		double DoubleValue;
		int32 IntValue;
		UObject* ObjectValue;
		const FString* StringValue;
		IStructWrapper* StructValue;
		TArray<FWebCefJSParam>* ArrayValue;
		TMap<FString, FWebCefJSParam>* MapValue;
	};

};

//class FWebCefJSScripting;

/** Base class for JS callback objects. */
USTRUCT()
struct CEFBROWSER_API FWebCefJSCallbackBase
{
	GENERATED_USTRUCT_BODY()

public:
	FWebCefJSCallbackBase();

	bool IsValid() const;


protected:
	FWebCefJSCallbackBase(TSharedPtr<FWebCefJSScripting> InScripting, const FGuid& InCallbackId);

	void Invoke(int32 ArgCount, FWebCefJSParam Arguments[], bool bIsError = false) const;

private:

	TWeakPtr<FWebCefJSScripting> ScriptingPtr;
	FGuid CallbackId;
};


/**
 * Representation of a remote JS function.
 * FWebCefJSFunction objects represent a JS function and allow calling them from native code.
 * FWebCefJSFunction objects can also be added to delegates and events using the Bind/AddLambda method.
 */
USTRUCT()
struct CEFBROWSER_API FWebCefJSFunction
	: public FWebCefJSCallbackBase
{
	GENERATED_USTRUCT_BODY()

	FWebCefJSFunction();

	FWebCefJSFunction(TSharedPtr<FWebCefJSScripting> InScripting, const FGuid& InFunctionId);

	template<typename ...ArgTypes> void operator()(ArgTypes... Args) const
	{
		FWebCefJSParam ArgArray[sizeof...(Args)] = {FWebCefJSParam(Args)...};
		Invoke(sizeof...(Args), ArgArray);
	}
};

/** 
 *  Representation of a remote JS async response object.
 *  UFUNCTIONs taking a FWebCefJSResponse will get it passed in automatically when called from a web browser.
 *  Pass a result or error back by invoking Success or Failure on the object.
 *  UFunctions accepting a FWebCefJSResponse should have a void return type, as any value returned from the function will be ignored.
 *  Calling the response methods does not have to happen before returning from the function, which means you can use this to implement asynchronous functionality.
 *
 *  Note that the remote object will become invalid as soon as a result has been delivered, so you can only call either Success or Failure once.
 */
USTRUCT()
struct CEFBROWSER_API FWebCefJSResponse
	: public FWebCefJSCallbackBase
{
	GENERATED_USTRUCT_BODY()

	FWebCefJSResponse();

	FWebCefJSResponse(TSharedPtr<FWebCefJSScripting> InScripting, const FGuid& InCallbackId);

	/**
	 * Indicate successful completion without a return value.
	 * The remote Promise's then() handler will be executed without arguments.
	 */
	void Success() const;

	/**
	 * Indicate successful completion passing a return value back.
	 * The remote Promise's then() handler will be executed with the value passed as its single argument.
	 */
	template<typename T>
	void Success(T Arg) const
	{
		FWebCefJSParam ArgArray[1] = {FWebCefJSParam(Arg)};
		Invoke(1, ArgArray, false);
	}

	/**
	 * Indicate failed completion, passing an error message back to JS.
	 * The remote Promise's catch() handler will be executed with the value passed as the error reason.
	 */
	template<typename T>
	void Failure(T Arg) const
	{
		FWebCefJSParam ArgArray[1] = {FWebCefJSParam(Arg)};
		Invoke(1, ArgArray, true);
	}


};
