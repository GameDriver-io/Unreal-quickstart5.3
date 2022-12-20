#pragma once

#include "CoreMinimal.h"
#include "CoreUObject.h"
#include "GameFramework/Actor.h"
#include "AGDIO_OverlapHit.generated.h"


UCLASS(BlueprintType, Blueprintable)
class AGDIO_OverlapHit : public AActor {
	GENERATED_BODY()

public:
	AGDIO_OverlapHit();

	AGDIO_OverlapHit(FString id);

public:
	UPROPERTY(EditAnywhere, Category = "gamedriver")
	FString id;

	UPROPERTY(EditAnywhere, Category = "gamedriver")
	bool hit;

	UPROPERTY(EditAnywhere, Category = "gamedriver")
	FHitResult hitResult;
};
