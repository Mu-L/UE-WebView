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
    }
}
