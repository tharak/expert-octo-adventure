#pragma once

#include "CoreMinimal.h"

/**
 * Enum representing possible player colors.
 */
UENUM(BlueprintType)
enum class EPlayerColor : uint8
{
    Red         UMETA(DisplayName = "Red"),
    Blue        UMETA(DisplayName = "Blue"),
    Green       UMETA(DisplayName = "Green"),
    Yellow      UMETA(DisplayName = "Yellow"),
    Orange      UMETA(DisplayName = "Orange"),
    Purple      UMETA(DisplayName = "Purple"),
    Pink        UMETA(DisplayName = "Pink"),
    Cyan        UMETA(DisplayName = "Cyan"),
    Black       UMETA(DisplayName = "Black"),
    White       UMETA(DisplayName = "White")
};
