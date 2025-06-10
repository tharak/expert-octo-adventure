#pragma once

#include "CoreMinimal.h"

/**
 * Enum representing different types of animals found in the jungle.
 */
UENUM(BlueprintType)
enum class EAnimalType : uint8
{
    Jaguar      UMETA(DisplayName = "Jaguar"),
    Capuchin    UMETA(DisplayName = "Capuchin Monkey"),
    Tapir       UMETA(DisplayName = "Tapir"),
    Macaw       UMETA(DisplayName = "Macaw"),
    Anaconda    UMETA(DisplayName = "Anaconda"),
    Sloth       UMETA(DisplayName = "Sloth"),
    Toucan      UMETA(DisplayName = "Toucan"),
    Anteater    UMETA(DisplayName = "Anteater"),
    Caiman      UMETA(DisplayName = "Caiman"),
    WildBoar    UMETA(DisplayName = "Wild Boar")
};
