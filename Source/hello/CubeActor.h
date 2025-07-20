#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CubeActor.generated.h"

UCLASS()
class HELLO_API ACubeActor : public AActor
{
    GENERATED_BODY()

public:
    ACubeActor();


    
protected:
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* CubeMesh;
};
