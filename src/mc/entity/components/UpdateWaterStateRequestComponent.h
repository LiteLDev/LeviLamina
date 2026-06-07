#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/entity/components/UpdateWaterStateFlowRequest.h"

struct UpdateWaterStateRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MaterialType> mMaterialType;
    ::ll::TypedStorage<1, 1, ::UpdateWaterStateFlowRequest>         mShouldApplyFlow;
    ::ll::TypedStorage<1, 1, bool>                                  mHasAdjacentFlowingBlocks;
    ::ll::TypedStorage<1, 1, bool>                                  mIsAnyWaterInBB;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mAccumulatedFlow;
    // NOLINTEND
};
