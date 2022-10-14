// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Zombie.h"
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

public:

	AZombieWaveManager();

	UPROPERTY()
		FTimerHandle WaveTimer;

	void SpawnWave();



	UFUNCTION()
		void SpawnZombie(const FVector& location, const FRotator& rotator);
	
};
