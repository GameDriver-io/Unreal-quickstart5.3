#pragma once

#include "UnrealCLRFramework.h"
#include <Runtime/Engine/Public/EngineUtils.h>
#include <Runtime/Engine/Public/ActorEditorUtils.h>
#include <Runtime/Engine/Public/LevelUtils.h>
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
///////////////////GDIO
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
}

///////////////////GDIO

