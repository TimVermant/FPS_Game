// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Zombie.h"
#include "PlayerWidget.h"
#include "ZombieWaveManager.generated.h"


/**
 * 
 */
UCLASS()
class ZOMBONE_API AZombieWaveManager : public AGameModeBase
{
	GENERATED_BODY()



		UPROPERTY(VisibleAnywhere, Category = ZombieManager)
		TArray<AZombie*> m_ActiveZombieList;



protected:
	virtual void BeginPlay();

	virtual void Update();

private:

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY()
		int WaveAmounts;

	UPROPERTY()
		int m_CurrentWave = 1;
public:

	AZombieWaveManager();

	UPROPERTY()
		FTimerHandle WaveTimer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HUD)
		TSubclassOf<UPlayerWidget> PlayerHudType = nullptr;
	UPlayerWidget* PlayerHudWidget;

	void SpawnWave();



	UFUNCTION()
		void SpawnZombie(const FVector& location, const FRotator& rotator);
	
};
