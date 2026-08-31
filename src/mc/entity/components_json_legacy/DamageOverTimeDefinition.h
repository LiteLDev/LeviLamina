#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mDamagePerHurt;
    ::ll::TypedStorage<4, 4, float> mTimeBetweenHurt;
    // NOLINTEND
};
