// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWidget.h"
#include "Components/TextBlock.h"


void UPlayerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UpdateAmmunition(30, 30);
}

void UPlayerWidget::UpdateAmmunition(int current, int max)
{
	Ammunition->SetText(FText::AsNumber(current));
}
