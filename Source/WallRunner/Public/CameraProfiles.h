// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CameraProfiles.generated.h"

/**
 * 
 */
UCLASS()
class WALLRUNNER_API UCameraProfiles : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
        FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
        float TimeBeforeBlend;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
        float BlendInTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
        UCurveFloat* BlendInCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
        float FieldOfView;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
        FRotator CameraInclination;
};
