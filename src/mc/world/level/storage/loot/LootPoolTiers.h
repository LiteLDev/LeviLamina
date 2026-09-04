#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootPoolTiers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mRangeForInitialTier;
    ::ll::TypedStorage<4, 4, int>   mBonusRolls;
    ::ll::TypedStorage<4, 4, float> mBonusRollChance;
    // NOLINTEND
};
