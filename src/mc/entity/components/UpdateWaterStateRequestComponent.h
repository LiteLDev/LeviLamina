#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/UpdateWaterStateFlowRequest.h"
#include "mc/world/level/material/MaterialType.h"

struct UpdateWaterStateRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MaterialType>                mMaterialType;
    ::ll::TypedStorage<1, 1, ::UpdateWaterStateFlowRequest> mShouldApplyFlow;
    ::ll::TypedStorage<1, 1, bool>                          mHasAdjacentFlowingBlocks;
    ::ll::TypedStorage<1, 1, bool>                          mIsAnyWaterInBB;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mAccumulatedFlow;
    // NOLINTEND
};
