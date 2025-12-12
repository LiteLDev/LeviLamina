#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PetSleepWithOwnerGoalData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> speedModifier;
    ::ll::TypedStorage<4, 4, int>   searchRange;
    ::ll::TypedStorage<4, 4, int>   searchHeight;
    ::ll::TypedStorage<4, 4, float> goalRadius;
    // NOLINTEND
};
