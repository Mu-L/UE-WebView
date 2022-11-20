// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CefBrowser/Public/WebViewFunLib.h"
#include "CefBrowser/Public/WebCookie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebViewFunLib() {}
// Cross Module References
	CEFBROWSER_API UClass* Z_Construct_UClass_UWebViewFunLib();
	CEFBROWSER_API UClass* Z_Construct_UClass_UWebViewFunLib_NoRegister();
	CEFBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FWebCookie();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CefBrowser();
// End Cross Module References
	DEFINE_FUNCTION(UWebViewFunLib::execDeleteCookies)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_CookieName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWebViewFunLib::DeleteCookies(Z_Param_URL,Z_Param_CookieName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebViewFunLib::execSetCookie)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_STRUCT_REF(FWebCookie,Z_Param_Out_Cookie);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWebViewFunLib::SetCookie(Z_Param_URL,Z_Param_Out_Cookie);
		P_NATIVE_END;
	}
	void UWebViewFunLib::StaticRegisterNativesUWebViewFunLib()
	{
		UClass* Class = UWebViewFunLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteCookies", &UWebViewFunLib::execDeleteCookies },
			{ "SetCookie", &UWebViewFunLib::execSetCookie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics
	{
		struct WebViewFunLib_eventDeleteCookies_Parms
		{
			FString URL;
			FString CookieName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookieName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CookieName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebViewFunLib_eventDeleteCookies_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_CookieName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_CookieName = { "CookieName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebViewFunLib_eventDeleteCookies_Parms, CookieName), METADATA_PARAMS(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_CookieName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_CookieName_MetaData)) };
	void Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebViewFunLib_eventDeleteCookies_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebViewFunLib_eventDeleteCookies_Parms), &Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_CookieName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* delete web cookie\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebViewFunLib.h" },
		{ "ToolTip", "delete web cookie" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewFunLib, nullptr, "DeleteCookies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::WebViewFunLib_eventDeleteCookies_Parms), Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewFunLib_DeleteCookies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewFunLib_DeleteCookies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics
	{
		struct WebViewFunLib_eventSetCookie_Parms
		{
			FString URL;
			FWebCookie Cookie;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cookie_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cookie;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebViewFunLib_eventSetCookie_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_Cookie_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_Cookie = { "Cookie", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebViewFunLib_eventSetCookie_Parms, Cookie), Z_Construct_UScriptStruct_FWebCookie, METADATA_PARAMS(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_Cookie_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_Cookie_MetaData)) }; // 677201831
	void Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebViewFunLib_eventSetCookie_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebViewFunLib_eventSetCookie_Parms), &Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_Cookie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "Comment", "/**\n\x09* Set web cookie\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebViewFunLib.h" },
		{ "ToolTip", "Set web cookie" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewFunLib, nullptr, "SetCookie", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::WebViewFunLib_eventSetCookie_Parms), Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewFunLib_SetCookie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewFunLib_SetCookie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebViewFunLib);
	UClass* Z_Construct_UClass_UWebViewFunLib_NoRegister()
	{
		return UWebViewFunLib::StaticClass();
	}
	struct Z_Construct_UClass_UWebViewFunLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebViewFunLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CefBrowser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebViewFunLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebViewFunLib_DeleteCookies, "DeleteCookies" }, // 1099463267
		{ &Z_Construct_UFunction_UWebViewFunLib_SetCookie, "SetCookie" }, // 3153076172
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewFunLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebViewFunLib.h" },
		{ "ModuleRelativePath", "Public/WebViewFunLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebViewFunLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebViewFunLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebViewFunLib_Statics::ClassParams = {
		&UWebViewFunLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebViewFunLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewFunLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebViewFunLib()
	{
		if (!Z_Registration_Info_UClass_UWebViewFunLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebViewFunLib.OuterSingleton, Z_Construct_UClass_UWebViewFunLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebViewFunLib.OuterSingleton;
	}
	template<> CEFBROWSER_API UClass* StaticClass<UWebViewFunLib>()
	{
		return UWebViewFunLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebViewFunLib);
	UWebViewFunLib::~UWebViewFunLib() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebViewFunLib, UWebViewFunLib::StaticClass, TEXT("UWebViewFunLib"), &Z_Registration_Info_UClass_UWebViewFunLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebViewFunLib), 4110199374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_2848017559(TEXT("/Script/CefBrowser"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_WebView_Source_CefBrowser_Public_WebViewFunLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
