#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                   mDurabilityMultiplier;
    ::ll::TypedStorage<4, 16, ::std::array<int, 4>> mProtectionBySlot;
    ::ll::TypedStorage<4, 4, int>                   mToughnessValue;
    ::ll::TypedStorage<4, 4, int>                   mEnchantValue;
    ::ll::TypedStorage<4, 4, float>                 mKnockBackResistance;
    // NOLINTEND
};
