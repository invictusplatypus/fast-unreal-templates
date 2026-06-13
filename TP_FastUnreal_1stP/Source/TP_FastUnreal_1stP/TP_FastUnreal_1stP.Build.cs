// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TP_FastUnreal_1stP : ModuleRules
{
	public TP_FastUnreal_1stP(ReadOnlyTargetRules Target) : base(Target)
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
			"TP_FastUnreal_1stP",
			"TP_FastUnreal_1stP/Variant_Horror",
			"TP_FastUnreal_1stP/Variant_Horror/UI",
			"TP_FastUnreal_1stP/Variant_Shooter",
			"TP_FastUnreal_1stP/Variant_Shooter/AI",
			"TP_FastUnreal_1stP/Variant_Shooter/UI",
			"TP_FastUnreal_1stP/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
