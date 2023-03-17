#pragma once

#include "UnrealCLR.h"
#include "UnrealCLRFramework.h"
#include <Runtime/Engine/Public/EngineUtils.h>
#include <Runtime/Engine/Public/ActorEditorUtils.h>
#include <Runtime/Engine/Public/LevelUtils.h>
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "Animation/AnimSequence.h"
#include <ARBlueprintLibrary.h>
///////////////////GDIO
#if PLATFORM_WINDOWS
#define GDIO_EXPORT extern "C" __declspec(dllexport)
#else
#define GDIO_EXPORT extern "C"
#endif

namespace UnrealCLR {
#if WITH_EDITOR
	struct UNREALCLR_API debuggerMemory {
		char* bufHPath;
		char* bufReturn;
		char* bufError;
		char* operation;
		char* type;
		char* stack;
		double duration;
		int32 bufState;
		int32 retState;
	};
	UNREALCLR_API  UnrealCLR::debuggerMemory debugMem;
#endif
	struct UNREALCLR_API guiMemory {
		int32 port;
		int32 numConnections;
		bool licenceValid;
		int32 daysLeft;
	};
	UNREALCLR_API  UnrealCLR::guiMemory guiPanelMem;

	UNREALCLR_API const FKey* getEKeyForIntValue(int val);
	UNREALCLR_API const int getEKeyIntValue(FKey val);

	SWidget* lastHandler = NULL;
}

namespace GDIO_World {
	GDIO_EXPORT bool GDIO_SetupEditor(char* hPathBuffer, char* returnBuffer, char* errorBuffer, char* operation, char* type, char* stack, int32* hpathState, int32* returnState, double* duration);

}

///////////////////GDIO
