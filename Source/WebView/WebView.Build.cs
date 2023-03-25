// Copyright aSurgingRiver, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.IO.Compression;
using System.Text;
using EpicGames.Core;
//using Tools.DotNETCommon;

namespace UnrealBuildTool.Rules
{
    public class WebView : ModuleRules
    {
        public WebView(ReadOnlyTargetRules Target) : base(Target)
        {
            bool isUsingJson = false;
            if (isDependPlugin("JsonLibrary"))
            {// use for JsonLibaray
                isUsingJson = true;
                PublicDefinitions.Add("JSON_LIB"); //添加 自定义的宏 或者 引擎的宏
                PublicDependencyModuleNames.Add("JsonLibrary");
            }
            //Path.Combine(DirectoryReference::MakeRemote(PluginDirectory),"..");
            //Plugins::ReadPluginsFromDirectory();
            //if (PluginDirectory!="") {
            //    Console.WriteLine("==================="+ PluginDirectory);
            //}
            string RootPath = ModuleDirectory;
            string subfix = ".template";
            foreach (string filePath in Directory.EnumerateFiles(RootPath, "*"+subfix, SearchOption.AllDirectories))
            {
                string FileName = Path.GetFileName(filePath);
                string pathDst = filePath.Replace(FileName, FileName.Replace(subfix, ""));
                string srcContent;
                srcContent = File.ReadAllText(filePath);
                if (isUsingJson) {// 生存新的文件
                    srcContent = srcContent.Replace("//@TEMPLATE","");
                }
                if (!File.Exists(pathDst)) {// 不存在直接写入
                    //FileStream stream=File.Open(pathDst, FileMode.Truncate);
                    File.WriteAllText(pathDst, srcContent);
                    continue;
                }
                // 存在则判断内容是否一致
                string dstContent = File.ReadAllText(pathDst);
                if (srcContent.GetHashCode() == dstContent.GetHashCode()) {
                    continue;
                }
                File.WriteAllText(pathDst, srcContent);
            }

            PublicDependencyModuleNames.AddRange(
                new string[]{
                    "Core",
                    "CoreUObject",
                    "Slate",
                    "SlateCore",
                    "UMG",
                    "Engine",
                    "WebBuildGuide"
                }
            );

            if (Target.Platform == UnrealTargetPlatform.Win64
                || Target.Platform == UnrealTargetPlatform.Linux
                || Target.Platform == UnrealTargetPlatform.Mac)
            {//
                PublicDependencyModuleNames.Add("CefBase"); 
                PublicDependencyModuleNames.Add("CefBrowser"); 
                PublicDefinitions.Add("CEF_NEW_VERSION=1"); //
            }
            else {// 兼容 WebBrowser
                PrivateDependencyModuleNames.Add("ProxyWeb");
                PublicDefinitions.Add("CEF_NEW_VERSION=0"); //
            }
            if (Target.bBuildEditor == true) {
                PrivateIncludePathModuleNames.AddRange(
                    new string[] {
                        "UnrealEd",
                    }
                );
                PrivateDependencyModuleNames.AddRange(
                    new string[] {
                        "UnrealEd",
                    }
                );
            }
        }
        bool isDependPlugin(string plugin)
        {
            bool hasDep = false;
            FileReference pluginFile = new FileReference(Path.Combine(PluginDirectory, "WebView.uplugin"));
            PluginInfo Plugin = new PluginInfo(pluginFile, PluginType.Project);
            foreach (PluginReferenceDescriptor desc in Plugin.Descriptor.Plugins) {
                if (desc.Name != plugin) continue;
                hasDep = desc.bEnabled;
                break;
            }
            return hasDep;
        }

    }
}
