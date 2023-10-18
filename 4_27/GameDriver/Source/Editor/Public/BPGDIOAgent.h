// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "HPathDebugger.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPGDIOAgent.generated.h"

/**
 * 
 */



UCLASS()
class HPATHDEBUGGER_API UBPGDIOAgent : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		 static bool importDLL(FString folder, FString name);
};
