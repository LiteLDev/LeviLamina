#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ThrowableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLaunchPowerScale;
    ::ll::TypedStorage<4, 4, float> mMaxLaunchPower;
    ::ll::TypedStorage<4, 4, float> mMinDrawDuration;
    ::ll::TypedStorage<4, 4, float> mMaxDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mDoSwingAnimation;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
