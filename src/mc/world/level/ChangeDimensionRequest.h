#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChangeDimensionRequest {
public:
    enum class State : int {
        PrepareRegion     = 0x0,
        WaitingForChunks  = 0x1,
        WaitingForRespawn = 0x2,
    };

    State                        mState;
    DimensionType                mFromDimensionId;
    DimensionType                mToDimensionId;
    Vec3                         mFormPosition;
    Vec3                         mToPosition;
    bool                         mUsePortal;
    bool                         mRespawn;
    std::unique_ptr<CompoundTag> mAgentTag;

    // prevent constructor by default
    ChangeDimensionRequest& operator=(ChangeDimensionRequest const&);
    ChangeDimensionRequest(ChangeDimensionRequest const&);

public:
    // NOLINTBEGIN
    MCAPI ChangeDimensionRequest();

    MCAPI ChangeDimensionRequest(class ChangeDimensionRequest&&);

    MCAPI ChangeDimensionRequest(DimensionType, DimensionType, class Vec3, class Vec3, bool, bool);

    MCAPI class ChangeDimensionRequest& operator=(class ChangeDimensionRequest&&);
    // NOLINTEND
};
