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
	/**
	* encode url to %%%%
	* @param URL : 
	* @param use_plus : is true spaces will change to "+".
	*/
	UFUNCTION(BlueprintCallable, Category = "Web View")
	static FString EncodeURL(const FString& URL,const bool use_plus=false);

	/**
	* open external browser
	* @param URL
	*/
	UFUNCTION(BlueprintCallable, Category = "Web View")
	void PopupURL(const FString& URL);
};
