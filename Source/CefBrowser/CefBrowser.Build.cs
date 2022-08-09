// Copyright aSurgingRiver, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;
public class CefBrowser : ModuleRules
{
	public CefBrowser(ReadOnlyTargetRules Target) : base(Target)
	{
		bPrecompile = false;
		bEnableExceptions = true;
		bUsePrecompiled = !bPrecompile;
		if (bUsePrecompiled) { 
			PrecompileForTargets = PrecompileTargetsType.None;
			//LinkType = TargetLinkType.Modular;
		}
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
		string privatep = Path.Combine(ModuleDirectory, "Private");
		if (Directory.Exists(privatep)) {
			PrivateIncludePaths.Add(privatep);
			PrivateIncludePaths.Add(Path.Combine(privatep, "WidgetWrap"));
			PrivateIncludePaths.Add(Path.Combine(privatep,"CefWrap"));
			PrivateIncludePaths.Add(Path.Combine(privatep, "impl"));
			
		}

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"ApplicationCore",
				"RHI",
				"RenderCore",
				"InputCore",
				"Serialization",
				"MediaUtils",
				"cefForUe",
				"HTTP",
				"OpenSSL"
			}
		);
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"SlateCore",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Projects",
				// ... add private dependencies that you statically link with here ...	
			}
			);

			// We need this one on Android for URL decoding
			PrivateDependencyModuleNames.Add("HTTP");
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
