// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FirstShader.generated.h"

UCLASS(MinimalAPI, meta = (ScriptName = "FirstShaderLibrary"))
class UFirstShaderBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:

	//UFirstShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "ShaderPlugin", meta = (WorldContext = "WorldContextObject"))
	static void DrawShaderRenderTarget(class UTextureRenderTarget2D* OutputRenderTarget, AActor* Ac, FLinearColor InColor);
	
};