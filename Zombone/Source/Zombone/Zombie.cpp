// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include <string>

// Sets default values
AZombie::AZombie()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AZombie::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AZombie::GetHit(float damage)
{
	// Debug
	//FString text = "Hitting zombie for: ";
	//text.Append(FString::SanitizeFloat(damage));
	//text.Append(" damage");
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, text);

	m_ZombieHealth -= damage;
	if (m_ZombieHealth <= 0.0f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Zombie dead"));
		Destroy();


	}
}

