#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PotentSulfurConstants {

struct GeyserSizeParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinEruptActiveTimeSeconds;
    ::ll::TypedStorage<4, 4, float> mMaxEruptActiveTimeSeconds;
    ::ll::TypedStorage<4, 4, float> mMinEruptIntervalSeconds;
    ::ll::TypedStorage<4, 4, float> mMaxEruptIntervalSeconds;
    ::ll::TypedStorage<4, 4, float> mEruptContinuousForce;
    ::ll::TypedStorage<4, 4, float> mMaxEruptVerticalVelocity;
    ::ll::TypedStorage<4, 4, int>   mPlumeHeight;
    ::ll::TypedStorage<4, 4, int>   mWaterHeight;
    // NOLINTEND
};

} // namespace PotentSulfurConstants
