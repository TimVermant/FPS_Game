// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieWaveManager.h"


AZombieWaveManager::AZombieWaveManager()
{

}

void AZombieWaveManager::BeginPlay()
{
	Super::BeginPlay();

	//SpawnWave(4);

}




void AZombieWaveManager::SpawnWave(int amount)
{
	FVector startPos{ 0.f,0.f,100.f };
	for (size_t i{ 0 }; i < amount; i++)
	{

		SpawnZombie(startPos, FRotator{ 0 });
		startPos.Z += 100.0f;
	}
}

void AZombieWaveManager::SpawnZombie(const FVector& location, const FRotator& rotator)
{
	AZombie* zom = GetWorld()->SpawnActor<AZombie>(ActorToSpawn, FVector{ 100 }, FRotator{ 0 });
	zom->SetActorLocation(location);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(zom->GetActorLocation().Z));
	m_ActiveZombieList.Add(zom);
}
