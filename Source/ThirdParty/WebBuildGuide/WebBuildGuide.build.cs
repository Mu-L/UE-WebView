using UnrealBuildTool;
using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
using System.IO.Compression;

public class WebBuildGuide : ModuleRules
{
    public WebBuildGuide(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
		bool isLicenseToPak = true;
		//Console.WriteLine("===============================");
		string sourcePath = Path.Combine(ModuleDirectory, "..");
		string pluginPath = Path.Combine(sourcePath, "..","..");
		CopyDir(".lng", Path.Combine(ModuleDirectory, "language"), pluginPath);
		string projFile = "" + Target.ProjectFile;
		if (Target.Version.MajorVersion >= 5) {
			CopyCefBrowser(pluginPath, projFile, "UnrealGame", ""+Target.Configuration);
		}
		else {
			CopyCefBrowser(pluginPath, projFile, "UE4", "" + Target.Configuration);
		}
		CheckLicense(Path.GetDirectoryName(projFile), isLicenseToPak);
	}




	void CopyCefBrowser(string pluginPath, string projectFile, string sw,string config)
	{
		string projName = Path.GetFileName(projectFile).Replace(".uproject", "");// 
		string projPath = Path.GetDirectoryName(projectFile); // 
		string srcMatch = Path.Combine(sw, config, "CefBrowser");
		string dstMatch = Path.Combine(projName, config, "CefBrowser");
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

	void CheckLicense(string ProjectDir,bool isLicensePak)
	{
		string licensePath = Path.Combine(ProjectDir, "Content", "license");
		if (!Directory.Exists(licensePath))
		{
			Directory.CreateDirectory(licensePath);
		}
		if (!File.Exists(Path.Combine(licensePath, "webview.dat")))
			return;
		string GamePath = Path.Combine(ProjectDir, "Config");
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
		string licenseSrc = "+DirectoriesToAlwaysStageAsUFS=(Path=\"license\")";
		string licenseDst = "-DirectoriesToAlwaysStageAsUFS=(Path=\"license\")";
		string licenseNode = "[/Script/UnrealEd.ProjectPackagingSettings]";
		if (isLicensePak)//add
		{
			string licensePkg = licenseSrc;
			licenseSrc = licenseDst;
			licenseDst = licenseSrc;
		}
		if (content.Contains(licenseNode))
		{
			if (content.Contains(licenseDst))
			{
				Console.WriteLine(GameCfg + " has configure!");
				return;//
			}
			else if (content.Contains(licenseSrc))
			{
				content = content.Replace(licenseSrc, licenseDst + "\n");
			}
			else if (isLicensePak)
				content = content.Replace(licenseNode, licenseNode + "\n" + licenseDst);
		}
		else if (isLicensePak)
		{
			content += "\n\n" + licenseNode + "\n" + licenseDst;
		}
		else return;
		File.WriteAllText(GameCfg, content, Encoding.UTF8);
		Console.WriteLine(GameCfg + " auto configure!");
	}
}
