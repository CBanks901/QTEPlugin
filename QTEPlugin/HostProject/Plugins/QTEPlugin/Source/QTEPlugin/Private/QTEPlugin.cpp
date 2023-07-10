// Copyright Epic Games, Inc. All Rights Reserved.

#include "QTEPlugin.h"
#include "UQTEUtilities.h"
#include "SQTEActorBinder.h"
#include "SQTEUtilityFunctionLibrary.h"
#include "SQTEEntityComponent.h"
#include "SQTEActorBinder.h"

#define LOCTEXT_NAMESPACE "FQTEPluginModule"

void FQTEPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FQTEPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FQTEPluginModule, QTEPlugin)