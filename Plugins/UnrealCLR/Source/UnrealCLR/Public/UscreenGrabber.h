#pragma once

#include "CoreMinimal.h"
//#include "CoreUObject.h"

#include "UscreenGrabber.generated.h"


UCLASS(BlueprintType, Blueprintable)
class UscreenGrabber : public UObject {
	GENERATED_BODY()

public:
	UNREALCLR_API UscreenGrabber();

	UNREALCLR_API UscreenGrabber(FString inscreenshotname);

	void HandleScreenshotData(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);
public:
	FString DeterminedPath;
	TArray<uint8> CompressedBitmap;
	bool isCaptured;
};
