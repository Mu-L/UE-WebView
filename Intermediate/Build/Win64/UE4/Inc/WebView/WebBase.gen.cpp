// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebView/Public/WebBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBase() {}
// Cross Module References
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebBase();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature();
	WEBVIEW_API UFunction* Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_WebView();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	WEBVIEW_API UClass* Z_Construct_UClass_UWebViewObject_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics
	{
		struct WebBase_eventOnDownloadComplete_Parms
		{
			FString Url;
			FString File;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnDownloadComplete_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnDownloadComplete_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnDownloadComplete__DelegateSignature", nullptr, nullptr, sizeof(WebBase_eventOnDownloadComplete_Parms), Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics
	{
		struct WebBase_eventOnBeforePopup_Parms
		{
			FString Url;
			FString Frame;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnBeforePopup_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnBeforePopup_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnBeforePopup__DelegateSignature", nullptr, nullptr, sizeof(WebBase_eventOnBeforePopup_Parms), Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics
	{
		struct WebBase_eventOnJsStr_Parms
		{
			FString Type;
			FString JSON;
			FString FuncName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuncName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FuncName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnJsStr_Parms, Type), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnJsStr_Parms, JSON), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName = { "FuncName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnJsStr_Parms, FuncName), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_JSON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::NewProp_FuncName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnJsStr__DelegateSignature", nullptr, nullptr, sizeof(WebBase_eventOnJsStr_Parms), Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics
	{
		struct WebBase_eventOnUrlChanged_Parms
		{
			FText Url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnUrlChanged_Parms, Url), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnUrlChanged__DelegateSignature", nullptr, nullptr, sizeof(WebBase_eventOnUrlChanged_Parms), Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics
	{
		struct WebBase_eventOnStateLoad_Parms
		{
			int32 state;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventOnStateLoad_Parms, state), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnStateLoad__DelegateSignature", nullptr, nullptr, sizeof(WebBase_eventOnStateLoad_Parms), Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "OnPreReBuild__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWebBase::execShowAddress)
	{
		P_GET_UBOOL(Z_Param_show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAddress(Z_Param_show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execWebPixel)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_pixel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WebPixel(Z_Param_pixel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execZoomLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_zoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomLevel(Z_Param_zoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execUnbindUObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindUObject(Z_Param_Name,Z_Param_Object,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execBindUObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindUObject(Z_Param_Name,Z_Param_Object,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execCallJsonStr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Function);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallJsonStr(Z_Param_Function,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execLoadURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadURL(Z_Param_NewURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBase::execExecuteJavascript)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScriptText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteJavascript(Z_Param_ScriptText);
		P_NATIVE_END;
	}
	void UWebBase::StaticRegisterNativesUWebBase()
	{
		UClass* Class = UWebBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindUObject", &UWebBase::execBindUObject },
			{ "CallJsonStr", &UWebBase::execCallJsonStr },
			{ "ExecuteJavascript", &UWebBase::execExecuteJavascript },
			{ "GetUrl", &UWebBase::execGetUrl },
			{ "LoadURL", &UWebBase::execLoadURL },
			{ "Reload", &UWebBase::execReload },
			{ "ShowAddress", &UWebBase::execShowAddress },
			{ "UnbindUObject", &UWebBase::execUnbindUObject },
			{ "WebPixel", &UWebBase::execWebPixel },
			{ "ZoomLevel", &UWebBase::execZoomLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBase_BindUObject_Statics
	{
		struct WebBase_eventBindUObject_Parms
		{
			FString Name;
			UObject* Object;
			bool bIsPermanent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventBindUObject_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventBindUObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((WebBase_eventBindUObject_Parms*)Obj)->bIsPermanent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebBase_eventBindUObject_Parms), &Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_BindUObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_BindUObject_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_BindUObject_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Name|Object" },
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09 * Expose a UObject instance to the browser runtime.\n\x09 * Properties and Functions will be accessible from JavaScript side.\n\x09 * As all communication with the rendering procesis asynchronous, return values (both for properties and function results) are wrapped into JS Future objects.\n\x09 * @param Name The name of the object.\n\x09 *        The object will show up as window.ue4.{Name} on the javascript side.\n\x09 *        If there is an existing object of the same name, this object will replace it. If bIsPermanent is false and there is an existing permanent binding, the permanent binding will be restored when the temporary one is removed.\n\x09 * @param Object The object instance.\n\x09 * @param bIsPermanent If true, the object will be visible to all pages loaded through this browser widget,\n\x09 *        otherwise, it will be deleted when navigating away from the current page.\n\x09 *        Non-permanent bindings should be registered from inside an OnLoadStarted event handler in order to be available before JS code starts loading.\n\x09 */" },
		{ "CPP_Default_bIsPermanent", "true" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Expose a UObject instance to the browser runtime.\nProperties and Functions will be accessible from JavaScript side.\nAs all communication with the rendering procesis asynchronous, return values (both for properties and function results) are wrapped into JS Future objects.\n@param Name The name of the object.\n       The object will show up as window.ue4.{Name} on the javascript side.\n       If there is an existing object of the same name, this object will replace it. If bIsPermanent is false and there is an existing permanent binding, the permanent binding will be restored when the temporary one is removed.\n@param Object The object instance.\n@param bIsPermanent If true, the object will be visible to all pages loaded through this browser widget,\n       otherwise, it will be deleted when navigating away from the current page.\n       Non-permanent bindings should be registered from inside an OnLoadStarted event handler in order to be available before JS code starts loading." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_BindUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "BindUObject", nullptr, nullptr, sizeof(WebBase_eventBindUObject_Parms), Z_Construct_UFunction_UWebBase_BindUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_BindUObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_BindUObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_BindUObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_BindUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_BindUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_CallJsonStr_Statics
	{
		struct WebBase_eventCallJsonStr_Parms
		{
			FString Function;
			FString Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventCallJsonStr_Parms, Function), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventCallJsonStr_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Data" },
		{ "AutoCreateRefTerm", "Data" },
		{ "Category", "Web View" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "CallJsonStr", nullptr, nullptr, sizeof(WebBase_eventCallJsonStr_Parms), Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_CallJsonStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_CallJsonStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics
	{
		struct WebBase_eventExecuteJavascript_Parms
		{
			FString ScriptText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText = { "ScriptText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventExecuteJavascript_Parms, ScriptText), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::NewProp_ScriptText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Executes a JavaScript string in the context of the web page\n\x09* @param ScriptText JavaScript string to execute\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Executes a JavaScript string in the context of the web page\n@param ScriptText JavaScript string to execute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ExecuteJavascript", nullptr, nullptr, sizeof(WebBase_eventExecuteJavascript_Parms), Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ExecuteJavascript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_ExecuteJavascript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_GetUrl_Statics
	{
		struct WebBase_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Gets the currently loaded URL.\n\x09* @return The URL, or empty string if no document is loaded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Gets the currently loaded URL.\n@return The URL, or empty string if no document is loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "GetUrl", nullptr, nullptr, sizeof(WebBase_eventGetUrl_Parms), Z_Construct_UFunction_UWebBase_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_LoadURL_Statics
	{
		struct WebBase_eventLoadURL_Parms
		{
			FString NewURL;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_LoadURL_Statics::NewProp_NewURL = { "NewURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventLoadURL_Parms, NewURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_LoadURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_LoadURL_Statics::NewProp_NewURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_LoadURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09 * Load the specified URL\n\x09 * @param NewURL New URL to load\n\x09 */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Load the specified URL\n@param NewURL New URL to load" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_LoadURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "LoadURL", nullptr, nullptr, sizeof(WebBase_eventLoadURL_Parms), Z_Construct_UFunction_UWebBase_LoadURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_LoadURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_LoadURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_LoadURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_LoadURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_LoadURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Reload the current page. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Reload the current page." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ShowAddress_Statics
	{
		struct WebBase_eventShowAddress_Parms
		{
			bool show;
		};
		static void NewProp_show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show_SetBit(void* Obj)
	{
		((WebBase_eventShowAddress_Parms*)Obj)->show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebBase_eventShowAddress_Parms), &Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_ShowAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_ShowAddress_Statics::NewProp_show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ShowAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Set web show address\n\x09* @ show : true:show false:hide\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Set web show address\n@ show : true:show false:hide" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ShowAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ShowAddress", nullptr, nullptr, sizeof(WebBase_eventShowAddress_Parms), Z_Construct_UFunction_UWebBase_ShowAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ShowAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ShowAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ShowAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ShowAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_ShowAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_UnbindUObject_Statics
	{
		struct WebBase_eventUnbindUObject_Parms
		{
			FString Name;
			UObject* Object;
			bool bIsPermanent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventUnbindUObject_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventUnbindUObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((WebBase_eventUnbindUObject_Parms*)Obj)->bIsPermanent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebBase_eventUnbindUObject_Parms), &Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Name|Object" },
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09 * Remove an existing script binding registered by BindUObject.\n\x09 * @param Name The name of the object to remove.\n\x09 * @param Object The object will only be removed if it is the same object as the one passed in.\n\x09 * @param bIsPermanent Must match the bIsPermanent argument passed to BindUObject.\n\x09 */" },
		{ "CPP_Default_bIsPermanent", "true" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Remove an existing script binding registered by BindUObject.\n@param Name The name of the object to remove.\n@param Object The object will only be removed if it is the same object as the one passed in.\n@param bIsPermanent Must match the bIsPermanent argument passed to BindUObject." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "UnbindUObject", nullptr, nullptr, sizeof(WebBase_eventUnbindUObject_Parms), Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_UnbindUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_UnbindUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_WebPixel_Statics
	{
		struct WebBase_eventWebPixel_Parms
		{
			FIntPoint pixel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pixel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebBase_WebPixel_Statics::NewProp_pixel = { "pixel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventWebPixel_Parms, pixel), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_WebPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_WebPixel_Statics::NewProp_pixel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_WebPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Set web page zoom level\n\x09* @ pixel.x : between 128 and 1024*8\n\x09* @ pixel.y : between 64 and 756*8\n\x09* when Pixel was set,then zoom invalid\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Set web page zoom level\n@ pixel.x : between 128 and 1024*8\n@ pixel.y : between 64 and 756*8\nwhen Pixel was set,then zoom invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_WebPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "WebPixel", nullptr, nullptr, sizeof(WebBase_eventWebPixel_Parms), Z_Construct_UFunction_UWebBase_WebPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_WebPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_WebPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_WebPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_WebPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_WebPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBase_ZoomLevel_Statics
	{
		struct WebBase_eventZoomLevel_Parms
		{
			float zoom;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBase_eventZoomLevel_Parms, zoom), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::NewProp_zoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Set web page zoom level \n\x09* @ zoom : between -7.5 and 9.0\n\x09* when Pixel was set,then zoom invalid \n\x09*/" },
		{ "CPP_Default_zoom", "0.000000" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Set web page zoom level\n@ zoom : between -7.5 and 9.0\nwhen Pixel was set,then zoom invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBase, nullptr, "ZoomLevel", nullptr, nullptr, sizeof(WebBase_eventZoomLevel_Parms), Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBase_ZoomLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBase_ZoomLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebBase_NoRegister()
	{
		return UWebBase::StaticClass();
	}
	struct Z_Construct_UClass_UWebBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ViewObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ViewObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadState_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUrlChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUrlChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJsEventStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJsEventStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeforePopup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeforePopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDownloadComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownloadComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreReBuild_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreReBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_urlInitial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_urlInitial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTransparency_MetaData[];
#endif
		static void NewProp_bEnableTransparency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTransparency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_styleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_styleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightKeyPopup_MetaData[];
#endif
		static void NewProp_RightKeyPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightKeyPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchInputMethod_MetaData[];
#endif
		static void NewProp_SwitchInputMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchInputMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RateFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addressShow_MetaData[];
#endif
		static void NewProp_addressShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_addressShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlShow_MetaData[];
#endif
		static void NewProp_controlShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_controlShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_downloadTip_MetaData[];
#endif
		static void NewProp_downloadTip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_downloadTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Pixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Pixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Zoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WebView,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBase_BindUObject, "BindUObject" }, // 642745257
		{ &Z_Construct_UFunction_UWebBase_CallJsonStr, "CallJsonStr" }, // 1562363459
		{ &Z_Construct_UFunction_UWebBase_ExecuteJavascript, "ExecuteJavascript" }, // 3595362837
		{ &Z_Construct_UFunction_UWebBase_GetUrl, "GetUrl" }, // 2666347889
		{ &Z_Construct_UFunction_UWebBase_LoadURL, "LoadURL" }, // 1766719241
		{ &Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature, "OnBeforePopup__DelegateSignature" }, // 2484736995
		{ &Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature, "OnDownloadComplete__DelegateSignature" }, // 2498107504
		{ &Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature, "OnJsStr__DelegateSignature" }, // 1945638650
		{ &Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature, "OnPreReBuild__DelegateSignature" }, // 706635668
		{ &Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature, "OnStateLoad__DelegateSignature" }, // 3156875857
		{ &Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature, "OnUrlChanged__DelegateSignature" }, // 4171764297
		{ &Z_Construct_UFunction_UWebBase_Reload, "Reload" }, // 2570480085
		{ &Z_Construct_UFunction_UWebBase_ShowAddress, "ShowAddress" }, // 3848631213
		{ &Z_Construct_UFunction_UWebBase_UnbindUObject, "UnbindUObject" }, // 3186569527
		{ &Z_Construct_UFunction_UWebBase_WebPixel, "WebPixel" }, // 1627466846
		{ &Z_Construct_UFunction_UWebBase_ZoomLevel, "ZoomLevel" }, // 1650409597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * , BlueprintType, hidecategories = (Object)\n *///UCLASS()\n" },
		{ "IncludePath", "WebBase.h" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", ", BlueprintType, hidecategories = (Object)\n //UCLASS()" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject_MetaData[] = {
		{ "Comment", "/** this party is blueprint delegate params */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "this party is blueprint delegate params" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject = { "_ViewObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, _ViewObject), Z_Construct_UClass_UWebViewObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when loading stat changed */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when loading stat changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState = { "OnLoadState", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnLoadState), Z_Construct_UDelegateFunction_UWebBase_OnStateLoad__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when the Url changes. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when the Url changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged = { "OnUrlChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnUrlChanged), Z_Construct_UDelegateFunction_UWebBase_OnUrlChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "// Called with ue.interface.broadcast(name, data) in the browser context.\n" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called with ue.interface.broadcast(name, data) in the browser context." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr = { "OnJsEventStr", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnJsEventStr), Z_Construct_UDelegateFunction_UWebBase_OnJsStr__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup = { "OnBeforePopup", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnBeforePopup), Z_Construct_UDelegateFunction_UWebBase_OnBeforePopup__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete = { "OnDownloadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnDownloadComplete), Z_Construct_UDelegateFunction_UWebBase_OnDownloadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild_MetaData[] = {
		{ "Category", "Web View|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild = { "OnPreReBuild", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, OnPreReBuild), Z_Construct_UDelegateFunction_UWebBase_OnPreReBuild__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** URL that the browser will initially navigate to. The URL should include the protocol, eg http:// */" },
		{ "DisplayName", "Initial URL" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "URL that the browser will initially navigate to. The URL should include the protocol, eg http://" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial = { "urlInitial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, urlInitial), METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Configure webpage  mouse is transparency */" },
		{ "DisplayName", "Enable Transparency" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Configure webpage  mouse is transparency" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->bEnableTransparency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency = { "bEnableTransparency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_styleText_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** Control and Editor show text style  */" },
		{ "DisplayName", "Text Style" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Control and Editor show text style" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_styleText = { "styleText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, styleText), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_styleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_styleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** popup a menu using right mouse in web page */" },
		{ "DisplayName", "Show Popup Menu" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "popup a menu using right mouse in web page" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->RightKeyPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup = { "RightKeyPopup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Whether to show an address bar. */" },
		{ "DisplayName", "Switch Input Method" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Whether to show an address bar." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->SwitchInputMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod = { "SwitchInputMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame_MetaData[] = {
		{ "Category", "Web View" },
		{ "ClampMax", "60" },
		{ "ClampMin", "30" },
		{ "Comment", "/** Configure webpage flush frame rate */" },
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Configure webpage flush frame rate" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame = { "RateFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, RateFrame), METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground_MetaData[] = {
		{ "Category", "Web View" },
		{ "Comment", "/** Configure webpage is transparency */" },
		{ "DisplayName", "Background Color" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Configure webpage is transparency" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground = { "ColorBackground", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, ColorBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** Whether to show an address bar. */" },
		{ "DisplayName", "Show Address" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Whether to show an address bar." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->addressShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow = { "addressShow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** Whether to show standard controls like Back, Forward, Reload etc. */" },
		{ "DisplayName", "Show Controls" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "Whether to show standard controls like Back, Forward, Reload etc." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->controlShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow = { "controlShow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_MetaData[] = {
		{ "Category", "Web View|Show Head" },
		{ "Comment", "/** When Download file Whether to show Tip Dialog. */" },
		{ "DisplayName", "Download Tip" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "When Download file Whether to show Tip Dialog." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_SetBit(void* Obj)
	{
		((UWebBase*)Obj)->downloadTip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip = { "downloadTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWebBase), &Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel_MetaData[] = {
		{ "Category", "Web View|Screen" },
		{ "Comment", "/** When Download file Whether to show web cursor. *///UPROPERTY(EditAnywhere, meta = (DisplayName = \"Use Web Cursor\", UIMin = 0, UIMax = 1), Category = \"Web View|Screen\")\n//\x09""bool  webCursor = false;\n" },
		{ "DisplayName", "Web Pixel" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
		{ "ToolTip", "When Download file Whether to show web cursor. //UPROPERTY(EditAnywhere, meta = (DisplayName = \"Use Web Cursor\", UIMin = 0, UIMax = 1), Category = \"Web View|Screen\")\n//     bool  webCursor = false;" },
		{ "UIMax", "8192" },
		{ "UIMin", "64" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel = { "_Pixel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, _Pixel), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom_MetaData[] = {
		{ "Category", "Web View|Screen" },
		{ "ClampMax", "5.000000" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "Zoom Level" },
		{ "ModuleRelativePath", "Public/WebBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom = { "_Zoom", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebBase, _Zoom), METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp__ViewObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnLoadState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnUrlChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnJsEventStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnBeforePopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnDownloadComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_OnPreReBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_urlInitial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_bEnableTransparency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_styleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_RightKeyPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_SwitchInputMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_RateFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_ColorBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_addressShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_controlShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp_downloadTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp__Pixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBase_Statics::NewProp__Zoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebBase_Statics::ClassParams = {
		&UWebBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebBase, 3980484055);
	template<> WEBVIEW_API UClass* StaticClass<UWebBase>()
	{
		return UWebBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebBase(Z_Construct_UClass_UWebBase, &UWebBase::StaticClass, TEXT("/Script/WebView"), TEXT("UWebBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
