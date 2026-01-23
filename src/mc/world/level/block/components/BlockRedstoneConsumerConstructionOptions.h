#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockRedstoneConsumerConstructionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  minPower;
    ::ll::TypedStorage<1, 1, bool> propagatePower;
    ::ll::TypedStorage<1, 1, bool> consumePowerAnyDirection;
    ::ll::TypedStorage<1, 1, bool> acceptSameDirection;
    ::ll::TypedStorage<1, 1, bool> acceptHalfPulse;
    ::ll::TypedStorage<1, 1, bool> ignoreFirstUpdate;
    // NOLINTEND
};
