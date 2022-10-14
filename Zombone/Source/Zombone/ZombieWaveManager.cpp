// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieWaveManager.h"


AZombieWaveManager::AZombieWaveManager()
{

}

void AZombieWaveManager::BeginPlay()
{

	Super::BeginPlay();

	WaveAmounts = 1;
	GetWorldTimerManager().SetTimer(WaveTimer, this, &AZombieWaveManager::SpawnWave, 1.0f, true, 1.0f);
}

void AZombieWaveManager::Update()
{



}


void AZombieWaveManager::SpawnWave()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Spawning wave"));
	FVector startPos{ 0.0f,-720.f,265.0f };
	for (size_t i{ 0 }; i < WaveAmounts; i++)
	{

		SpawnZombie(startPos, FRotator{ 0 });

	}
	GetWorldTimerManager().ClearTimer(WaveTimer);
	GetWorldTimerManager().SetTimer(WaveTimer, this, &AZombieWaveManager::SpawnWave, 1.0f, true, 5.0f);
	WaveAmounts = FMath::RandRange(1, 3);
}


void AZombieWaveManager::SpawnZombie(const FVector& location, const FRotator& rotator)
{
	AZombie* zom = GetWorld()->SpawnActor<AZombie>(ActorToSpawn, FVector{ 100 }, FRotator{ 0 });
	zom->SetActorLocation(location);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(zom->GetActorLocation().Z));
	m_ActiveZombieList.Add(zom);
}
