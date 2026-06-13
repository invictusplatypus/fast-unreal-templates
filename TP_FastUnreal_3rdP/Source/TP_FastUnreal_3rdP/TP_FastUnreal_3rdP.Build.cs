// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TP_FastUnreal_3rdP : ModuleRules
{
	public TP_FastUnreal_3rdP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TP_FastUnreal_3rdP",
			"TP_FastUnreal_3rdP/Variant_Platforming",
			"TP_FastUnreal_3rdP/Variant_Platforming/Animation",
			"TP_FastUnreal_3rdP/Variant_Combat",
			"TP_FastUnreal_3rdP/Variant_Combat/AI",
			"TP_FastUnreal_3rdP/Variant_Combat/Animation",
			"TP_FastUnreal_3rdP/Variant_Combat/Gameplay",
			"TP_FastUnreal_3rdP/Variant_Combat/Interfaces",
			"TP_FastUnreal_3rdP/Variant_Combat/UI",
			"TP_FastUnreal_3rdP/Variant_SideScrolling",
			"TP_FastUnreal_3rdP/Variant_SideScrolling/AI",
			"TP_FastUnreal_3rdP/Variant_SideScrolling/Gameplay",
			"TP_FastUnreal_3rdP/Variant_SideScrolling/Interfaces",
			"TP_FastUnreal_3rdP/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
