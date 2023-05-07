// Copyright aSurgingRiver, Inc. All Rights Reserved.
#include "WebViewWidget.h"
//#include "SCefBrowser.h"
#include "Async/Async.h"
#include "WebViewObject.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Async/TaskGraphInterfaces.h"
#include "UObject/ConstructorHelpers.h"
#include "Misc/ConfigCacheIni.h"
#ifdef JSON_LIB
#include "JsonUEFunLib.h"
#endif

#if WITH_EDITOR
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Materials/MaterialExpressionTextureSample.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "Materials/MaterialFunction.h"
#include "Factories/MaterialFactoryNew.h"
//#include "AssetRegistryModule.h"
#include "PackageHelperFunctions.h"
#endif

#define LOCTEXT_NAMESPACE "WebViewWidget"

/////////////////////////////////////////////////////
// UWebViewWidget

UWebViewWidget::UWebViewWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UWebViewWidget::Asyn(const FString& Name, const FString& Data, const FString& Callback) {
#ifdef JSON_LIB
	if (OnJsEvent.IsBound()) {
		UJsonUEFunLib::FOnParseAsyncS OnParseAsync;
		OnParseAsync.BindUObject(this,&UWebViewWidget::ParseAsncHand);
		UJsonUEFunLib::ParseAsyn(Name,Data, Callback, OnParseAsync);
		return true;
	}
#endif
	if (UWebBase::Asyn(Name, Data, Callback))return true;
	return false;
}

/////////////////////////////////////////////////////
#ifdef JSON_LIB
void UWebViewWidget::Call(const FString& Function, const UJsonUE* Json)
{
	if (Json == nullptr)return;
	CallJsonStr(Function, Json->ToString());
}

void UWebViewWidget::ParseAsncHand(const FString& Name,UJsonUE* Json, const FString& Callback) {
	OnJsEvent.Broadcast(Name,Json, Callback);
}

#endif
#undef LOCTEXT_NAMESPACE
