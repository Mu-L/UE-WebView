
#pragma once

#include "CoreMinimal.h"
#include "Layout/Visibility.h"
#include "Input/Reply.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Framework/SlateDelegates.h"
#include "ImitateInput.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct CEFBROWSER_API FImitateInput
{
	GENERATED_USTRUCT_BODY()
	// spec url
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Web View")
	FString URL;

	// Show Imitate Input
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Web View")
	bool Show=true;

	// command interval time
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 10, UIMax = 10000), Category = "Web View")
	int interval = 30;

	/* 
	{"type":"delay","ms":3000}
	{"type":"input","text":"content"}
	{"type":"down","pos":{"x":128,"y":256}}
	{"type":"move","pos":{"x":128,"y":256}}
	{"type":"up","pos":{"x":128,"y":256}}
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Web View")
	TArray<FString> Event;
};
