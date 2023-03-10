// Copyright aSurgingRiver, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.IO.Compression;
using System.Text;


namespace UnrealBuildTool.Rules
{
    public class WebView : ModuleRules
    {
        public WebView(ReadOnlyTargetRules Target) : base(Target)
        {
            bool isUsingJson = false;
            if (isUsingJson)
            {// use for JsonLibaray
                PublicDefinitions.Add("JSON_LIB"); //添加 自定义的宏 或者 引擎的宏
                PublicDependencyModuleNames.Add("JsonUE");
            }
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

    }
}
