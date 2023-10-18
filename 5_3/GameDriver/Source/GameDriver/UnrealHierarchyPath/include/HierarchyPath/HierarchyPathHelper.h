#pragma once
#include <UObject/Object.h>
#include <string>
#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "Engine/UserInterfaceSettings.h"
//#include "../../HPathDebugger/Public/HPathDebugger.h"
#endif


namespace GameDriver {
	GAMEDRIVER_API const FKey* getEKeyForIntValue(int val);
	GAMEDRIVER_API const int getEKeyIntValue(FKey val);
}


#include <GDIOTypes.h>

bool ConvertWorldLocationToScreenLocation(APlayerController* PlayerController, FVector& tempV, FVector2D& outputSpot);
bool UObjectGetPosition(UObject* obj, FVector& location);
TArray<UActorComponent*>* GetAllComponents(UObject* Actor);
bool PlayerController_SetMouseState(APlayerController* PlayerController, int buttonId, EInputEvent Event, FVector2D* newLocationRaw);
bool PlayerController_SetTouchState(APlayerController* PlayerController, int fingerId, ETouchType::Type Event, FVector2D* Location);
LiteGameObject* ToLiteGameObject(UObject* g, bool includeHPath);
bool ProjectWorldToCamera(APlayerController const* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative, FMinimalViewInfo* viewInfo);
bool UObjectGetViewportPosition(UObject* obj, FVector& loc);
