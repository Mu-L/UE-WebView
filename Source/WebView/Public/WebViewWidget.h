// Copyright aSurgingRiver, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Styling/SlateTypes.h"
#ifdef JSON_LIB
#include "JsonObj.h"
#endif
#include "WebBase.h"
#include "WebViewWidget.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class WEBVIEW_API UWebViewWidget : public UWebBase
{
	GENERATED_UCLASS_BODY()
protected:
	virtual bool Asyn(const FString& Name, const FString& Data, const FString& Callback) override;
public:
	/* this party use for jsonlibaray ,if use ,please delete comment.*/
	//@TEMPLATE DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnJsEvent, const FString&, Key, UJsonUE*, Json, const FString&, Callback);
	//@TEMPLATE UPROPERTY(BlueprintAssignable, Category = "Web View | Events") 
	//@TEMPLATE FOnJsEvent OnJsEvent; 
	//@TEMPLATE UFUNCTION(BlueprintCallable, Category = "Web View", meta = (AdvancedDisplay = "Data", AutoCreateRefTerm = "Data"))
	//@TEMPLATE void Call(const FString& Function, const UJsonUE* Json); 
	//@TEMPLATE void ParseAsncHand(const FString& Name, UJsonUE* Json, const FString& Callback);
};


