#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageOverTimeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHurtValue;
    ::ll::TypedStorage<4, 4, int> mDamageTimeInterval;
    ::ll::TypedStorage<4, 4, int> mDamageTime;
    // NOLINTEND

};
