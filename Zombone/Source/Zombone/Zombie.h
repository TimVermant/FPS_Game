// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Zombie.generated.h"

UCLASS()
class ZOMBONE_API AZombie : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(VisibleDefaultsOnly, Category = Zombie)
		float m_ZombieHealth = 50.0f;

	UPROPERTY(EditAnywhere)
		float m_ZombieDamage = 10.0f;

public:
	// Sets default values for this character's properties
	AZombie();

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
		class UMaterial* DefaultMaterial;

	UPROPERTY(EditAnywhere)
		class UMaterial* HitMaterial;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ZombieHit(float damage);


	UFUNCTION(BlueprintCallable)
		float GetDamage();


};
