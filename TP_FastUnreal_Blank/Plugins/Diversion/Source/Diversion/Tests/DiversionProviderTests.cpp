// Copyright 2024 Diversion Company, Inc. All Rights Reserved.

#include "Misc/AutomationTest.h"
#include "Misc/Paths.h"
#include "DiversionProvider.h"

DEFINE_LOG_CATEGORY_STATIC(LogDiversionProviderTests, Log, All);

// Regression test for the fatal-on-launch crash caused by '.dv-conflict.uasset'
// sidecar files the Diversion agent writes into /Content/. Pre-fix,
// TryUnloadingOpenedPackage called FPackageName::FilenameToLongPackageName
// (the non-Try variant) which aborts the editor on paths whose derived
// package name contains illegal chars (e.g. the inner '.' in
// '/Game/NewBlueprint.dv-conflict'). If this test ever crashes the runner
// instead of asserting, the fatal call has been reintroduced.
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDiversionProviderTryUnloadingConflictSidecar,
	"Diversion.Tests.DiversionProvider.TryUnloadingOpenedPackage.ConflictSidecarReturnsFalse",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FDiversionProviderTryUnloadingConflictSidecar::RunTest(const FString& Parameters)
{
	// Deliberately constructed without Init() to exercise the pre-init path — the fix must
	// return before any provider state is touched. Do not add setup here; it would mask
	// the regression by short-circuiting before the fatal call site is reached.
	FDiversionProvider Provider;

	const FString ConflictSidecarPath = FPaths::ConvertRelativePathToFull(
		FPaths::ProjectContentDir() / TEXT("NewBlueprint.dv-conflict.uasset"));

	// If the non-Try variant sneaks back in, this call fires UE_LOG(..., Fatal, ...)
	// and aborts the process — reaching TestFalse at all is the regression signal.
	const bool bUnloaded = Provider.TryUnloadingOpenedPackage(ConflictSidecarPath);

	return TestFalse(
		TEXT("TryUnloadingOpenedPackage should return false for paths that do not map to a valid UE package name"),
		bUnloaded);
}
