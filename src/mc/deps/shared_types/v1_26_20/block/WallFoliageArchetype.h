#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct WallFoliageArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mSizeCount;
    ::ll::TypedStorage<1, 1, bool>  mIsBonemealable;
    ::ll::TypedStorage<4, 4, float> mBounciness;
    ::ll::TypedStorage<4, 4, float> mFallDamageMultiplier;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
