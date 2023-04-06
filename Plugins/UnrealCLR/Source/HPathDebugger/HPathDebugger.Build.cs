/*
 *  Gamedriver HPath debugger
 */

using System;
using System.IO;
using UnrealBuildTool;


public class HPathDebugger : ModuleRules {
	public HPathDebugger(ReadOnlyTargetRules Target) : base(Target) {

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

         	bUsePrecompiled = true;

        OptimizeCode = CodeOptimization.Never;
        
        //PrecompileForTargets = PrecompileTargetsType.Any;

        PublicIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Public") });

		PrivateIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Private") });

        
        PublicDependencyModuleNames.AddRange(new string[] {
			"Core", "UnrealCLR", "SceneOutliner", "LevelEditor", "WorldBrowser", "Kismet", "ToolMenus"
        });

		PrivateDependencyModuleNames.AddRange(new string[] {
            "UnrealEd", "CoreUObject","Engine","InputCore", "UMGEditor", "EditorStyle",
            "Blutility",
            "EditorScriptingUtilities",
            "AIModule",
			"AssetRegistry",
			"HeadMountedDisplay",
			"UMG",
			"Slate",
			"SlateCore", "DeveloperSettings","UnrealCLR", "DesktopPlatform"
        });


        DynamicallyLoadedModuleNames.AddRange(new string[] {});

        string[] files = Directory.GetFiles(Path.Combine(ModuleDirectory, "../../Managed"), "*.*", SearchOption.AllDirectories);

        foreach (string file in files)
        {
            RuntimeDependencies.Add(file);
        }

        string userAssemblies = Path.Combine(PluginDirectory, "../../Managed");

        if (Directory.Exists(userAssemblies))
        {
            files = Directory.GetFiles(userAssemblies, "*.*", SearchOption.AllDirectories);

            foreach (string file in files)
            {
                RuntimeDependencies.Add(file);
            }
        }
        
    }
}