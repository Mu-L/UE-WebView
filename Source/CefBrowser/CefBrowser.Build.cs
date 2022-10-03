// Copyright aSurgingRiver, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
using System.IO.Compression;

public class CefBrowser : ModuleRules
{
	public CefBrowser(ReadOnlyTargetRules Target) : base(Target)
	{
		//OptimizeCode = CodeOptimization.Never;
		//Type = ModuleType.CPlusPlus;
		//bPrecompile = false;
		bEnableExceptions = true;
		bUsePrecompiled = !bPrecompile;
		if (bUsePrecompiled) {
			PrecompileForTargets = PrecompileTargetsType.None;
		}
		//PublicDefinitions.Add("WRAPPING_CEF_SHARED=1"); //
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
		string privatep = Path.Combine(ModuleDirectory, "Private");
		if (Directory.Exists(privatep))
		{
			PrivateIncludePaths.Add(privatep);
			PrivateIncludePaths.Add(Path.Combine(privatep, "WidgetWrap"));
		}
		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			PrivateDependencyModuleNames.Add("SDL2");
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
		//PrivateDependencyModuleNames.Add("HTTP");

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
		//Console.WriteLine("===============================");
		string sourcePath = Path.Combine(ModuleDirectory, "..");
		string pluginPath = Path.Combine(sourcePath, "..");
		CopyDir(".lng", Path.Combine(sourcePath, "ThirdParty", "WebBuildGuide", "language"), pluginPath);
		string projFile = "" + Target.ProjectFile;
		if (Target.Version.MajorVersion >= 5) {
			CopyCefBrowser(pluginPath, projFile, "UnrealGame");
		}
		else {
			CopyCefBrowser(pluginPath, projFile, "UE4");
		}
		CheckLicense(Path.GetDirectoryName(projFile));

	}


	void CopyCefBrowser(string pluginPath, string projectFile, string sw)
	{
		string projName = Path.GetFileName(projectFile).Replace(".uproject", "");// 
		string projPath = Path.GetDirectoryName(projectFile); // 
		string srcMatch = Path.Combine(sw, "Development", "CefBrowser");
		string dstMatch = Path.Combine(projName, "Development", "CefBrowser");
		string pluginInter = Path.Combine(pluginPath, "Intermediate");
		if (!Directory.Exists(pluginInter)) return;
		foreach (string pathName in Directory.EnumerateDirectories(pluginInter, "CefBrowser", SearchOption.AllDirectories))
		{
			if (!pathName.EndsWith(srcMatch)) continue;
			foreach (string FileName in Directory.EnumerateFiles(pathName, "*.*", SearchOption.AllDirectories))
			{
				string name = Path.GetFileName(FileName);// 
				string srcBrowserPath = Path.GetDirectoryName(FileName);// 
				string dstBrowserPath = srcBrowserPath.Replace(pluginPath, projPath).Replace(srcMatch, dstMatch);
				string dstFile = Path.Combine(dstBrowserPath, name);
				//Console.WriteLine("dstBrowserPath=" + dstBrowserPath);
				if (!Directory.Exists(dstBrowserPath))
				{
					Directory.CreateDirectory(dstBrowserPath);
				}
				if (File.Exists(dstFile)) continue;
				System.IO.File.Copy(FileName, dstFile, true);
			}

		}
	}


	void CopyDir(string subfix, string outPath, string DstRoot)
	{
		//Console.WriteLine("===============================");
		//Console.WriteLine("outPath=" + outPath);
		//Console.WriteLine("DstRoot=" + DstRoot);
		if (!Directory.Exists(outPath)) return;
		foreach (string FileName in Directory.EnumerateFiles(outPath, "*" + subfix, SearchOption.AllDirectories))
		{
			string newFile = FileName.Replace(outPath, DstRoot);
			string file = Path.GetFileName(newFile).Replace(subfix, "");
			string pathDst = Path.GetDirectoryName(newFile);
			newFile = Path.Combine(pathDst, file);
			//Console.WriteLine("newFile=" + newFile);
			if (File.Exists(newFile)) continue;
			//Console.WriteLine("newFile=" + newFile + "  copy");
			if (!Directory.Exists(pathDst))
			{
				Directory.CreateDirectory(pathDst);
			}
			System.IO.File.Copy(FileName, newFile, true);
		}
	}

	void CheckLicense(string Target)
	{
		string licensePath = Path.Combine(Target, "Content", "license");
		if (!Directory.Exists(licensePath))
		{
			Directory.CreateDirectory(licensePath);
		}
		string license = Path.Combine(licensePath, "webview.dat");
		if (!File.Exists(license))
		{
			string webviewLic = Path.Combine(ModuleDirectory, "license", "webview.dat");
			if (File.Exists(webviewLic))
			{
				System.IO.File.Copy(webviewLic, license);
			}
		}
		string GamePath = Path.Combine(Target, "Config");
		string GameCfg = Path.Combine(GamePath, "DefaultGame.ini");
		if (!Directory.Exists(GamePath))
		{
			Directory.CreateDirectory(GamePath);
		}
		if (!File.Exists(GameCfg))
		{
			File.Create(GameCfg);
		}
		//if( File.OpenWrite(GameCfg)) return ;
		string content;
		try { content = File.ReadAllText(GameCfg/*, Encoding.UTF8*/); }
		catch
		{//
			return;
		}
		string licensePak = "+DirectoriesToAlwaysStageAsUFS=(Path=\"license\")";
		string licenseNode = "[/Script/UnrealEd.ProjectPackagingSettings]";
		if (content.Contains(licenseNode))
		{
			if (content.Contains(licensePak))
			{
				Console.WriteLine(GameCfg + " has configure!");
				return;//
			}
			content = content.Replace(licenseNode, licenseNode + "\n" + licensePak);
		}
		else
		{
			content += "\n\n" + licenseNode + "\n" + licensePak;
		}
		File.WriteAllText(GameCfg, content, Encoding.UTF8);
		Console.WriteLine(GameCfg + " auto configure!");
	}
}
