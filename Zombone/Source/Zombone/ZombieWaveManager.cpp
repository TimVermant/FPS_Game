// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieWaveManager.h"


AZombieWaveManager::AZombieWaveManager()
{
	//FActorSpawnParameters spawnParams;

	//GetWorld()->SpawnActor<AZombie>(FVector{ 100 }, FRotator{ 0 }, spawnParams);
	//GetWorld()->SpawnActor(AZombie::StaticClass());

	//SpawnWave(4);
}

void AZombieWaveManager::BeginPlay()
{
	Super::BeginPlay();

	AZombie* zom = GetWorld()->SpawnActor<AZombie>(ActorToSpawn, FVector{ 100 }, FRotator{ 0 });

}




//void AZombieWaveManager::SpawnWave(int amount)
//{
//	for (size_t i{ 0 }; i < amount; i++)
//	{
//
//		SpawnZombie(&AZombie{});
//	}
//}
//
//void AZombieWaveManager::SpawnZombie(AZombie* pZombie)
//{
//	//GetWorld()->SpawnActor<AZombie>(pZombie);
//	/*AZombie* newZombie = Cast<AZombie>(GetWorld()->SpawnActor(AZombie::StaticClass()));
//	m_ActiveZombieList.Add(newZombie);*/
//}
