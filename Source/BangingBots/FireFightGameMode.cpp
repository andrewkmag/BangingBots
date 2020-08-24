// Fill out your copyright notice in the Description page of Project Settings.


#include "FireFightGameMode.h"


void AFireFightGameMode::PawnKilled(APawn* PawnKilled) 
{
    Super::PawnKilled(PawnKilled);
    
    // Check Lose condition (player is killed)
    APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
    if (PlayerController != nullptr)
    {
        PlayerController->GameHasEnded(nullptr, false);
    }

}
