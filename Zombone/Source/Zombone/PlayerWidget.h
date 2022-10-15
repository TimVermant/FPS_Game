// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"

/**
 *
 */
UCLASS()
class ZOMBONE_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	void UpdateAmmunition(int current, int max);

	UPROPERTY(EditAnywhere, meta = ( BindWidget ) )
		class UTextBlock* Ammunition;


	void NativeConstruct() override;
};
