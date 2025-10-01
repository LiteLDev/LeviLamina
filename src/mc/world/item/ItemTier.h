#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemTier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mLevel;
    ::ll::TypedStorage<4, 4, int>   mUses;
    ::ll::TypedStorage<4, 4, float> mSpeed;
    ::ll::TypedStorage<4, 4, int>   mDamage;
    ::ll::TypedStorage<4, 4, int>   mEnchantmentValue;
    // NOLINTEND
};
