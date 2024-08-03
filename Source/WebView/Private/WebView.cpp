// Copyright aSurgingRiver, Inc. All Rights Reserved.

#include "WebView.h"
#include "Modules/ModuleManager.h"
#include "Materials/Material.h"
#ifdef WEBVIEW_CUSTOMIZED_CORE
#include "WebModule.h"
#if WITH_EDITOR
#include "Editor.h"
#endif
#endif

#define LOCTEXT_NAMESPACE "FWebViewModule"

class FWebViewModule : public IWebViewModule
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
};

void FWebViewModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  
	// For modules that support dynamic reloading,
	// we call this function before unloading the module.
#if WITH_EDITOR 
#ifdef WEBVIEW_CUSTOMIZED_CORE
	IWebModule::Get().UnLoad();
#endif
#endif
}

void FWebViewModule::StartupModule()
{
#if WITH_EDITOR 
#ifdef WEBVIEW_CUSTOMIZED_CORE
	IWebModule::Get().Load();
	FEditorDelegates::PausePIE.AddLambda([](bool) {IWebModule::Get().OnEndPIE(); });
	FEditorDelegates::BeginPIE.AddLambda([](bool) {IWebModule::Get().OnBeginPIE(); });
	FEditorDelegates::EndPIE.AddLambda([](bool) {IWebModule::Get().OnEndPIE(); });
	FEditorDelegates::ResumePIE.AddLambda([](bool) {IWebModule::Get().OnBeginPIE(); });
#endif
#endif
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWebViewModule, WebView)