#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
