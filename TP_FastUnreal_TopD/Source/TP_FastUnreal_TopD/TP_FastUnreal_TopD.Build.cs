// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TP_FastUnreal_TopD : ModuleRules
{
	public TP_FastUnreal_TopD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TP_FastUnreal_TopD",
			"TP_FastUnreal_TopD/Variant_Strategy",
			"TP_FastUnreal_TopD/Variant_Strategy/UI",
			"TP_FastUnreal_TopD/Variant_TwinStick",
			"TP_FastUnreal_TopD/Variant_TwinStick/AI",
			"TP_FastUnreal_TopD/Variant_TwinStick/Gameplay",
			"TP_FastUnreal_TopD/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
