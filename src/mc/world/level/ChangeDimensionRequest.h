#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

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

    MCAPI ChangeDimensionRequest(class ChangeDimensionRequest&& other);

    MCAPI ChangeDimensionRequest(
        DimensionType fromId,
        DimensionType toId,
        class Vec3    fromLocation,
        class Vec3    toLocation,
        bool          usePortal,
        bool          respawn
    );

    MCAPI class ChangeDimensionRequest& operator=(class ChangeDimensionRequest&& other);

    MCAPI ~ChangeDimensionRequest();

    // NOLINTEND
};
