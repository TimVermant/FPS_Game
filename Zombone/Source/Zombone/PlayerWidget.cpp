// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWidget.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"


void UPlayerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UpdateAmmunition(30, 30);
}

void UPlayerWidget::UpdateAmmunition(int current, int max)
{
	FString currentString = FString::FromInt(current).Append("/").Append(FString::FromInt(max));
	Ammunition->SetText(FText::FromString(currentString));
}

void UPlayerWidget::UpdateWaveCounter(int current)
{
	WaveCounter->SetText(FText::AsNumber(current));
}

void UPlayerWidget::UpdateHealth(float current, float max)
{
	Health->SetPercent(current / max);
}
