// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WebCookie.h"
#include "WebViewFunLib.generated.h"

/**
 * 
 */
UCLASS()
class CEFBROWSER_API UWebViewFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* Set web cookie
	*/
	UFUNCTION(BlueprintCallable, Category = "Web View")
	static bool SetCookie(const FString& URL, const FWebCookie& Cookie);
	/**
	* delete web cookie
	*/
	UFUNCTION(BlueprintCallable, Category = "Web View")
	static bool DeleteCookies(const FString& URL, const FString& CookieName);
};
