// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class duoren1 : ModuleRules
{
	public duoren1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
