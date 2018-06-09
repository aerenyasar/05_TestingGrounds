// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class TESTINGGROUNDS_API AGun : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

private:



public:	
	// Sets default values for this actor's properties
	AGun();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector GunOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class USoundBase* FireSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AProjectile> ProjectileClass;
	class UAnimInstance* AnimInstance;
	void OnFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	
	
};
