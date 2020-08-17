// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASPractise : ModuleRules
{
	public GASPractise(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
