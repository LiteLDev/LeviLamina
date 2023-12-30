#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChangeDimensionRequest {
public:
    enum State
    {
        PrepareRegion = 0x0,
        WaitingForChunks = 0x1,
        WaitingForRespawn = 0x2,
    };

    State mState;
    DimensionType mFromDimensionId;
    DimensionType mToDimensionId;
    Vec3 mFormPosition;
    Vec3 mToPosition;
    bool mUsePortal;
    bool mRespawn;
    std::unique_ptr<CompoundTag> mAgentTag;

    // prevent constructor by default
    ChangeDimensionRequest& operator=(ChangeDimensionRequest const&);
    ChangeDimensionRequest(ChangeDimensionRequest const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ChangeDimensionRequest@@QEAA@XZ
    MCAPI ChangeDimensionRequest();

    // symbol: ??0ChangeDimensionRequest@@QEAA@$$QEAV0@@Z
    MCAPI ChangeDimensionRequest(class ChangeDimensionRequest&&);

    // symbol: ??0ChangeDimensionRequest@@QEAA@V?$AutomaticID@VDimension@@H@@0VVec3@@1_N2@Z
    MCAPI ChangeDimensionRequest(DimensionType, DimensionType, class Vec3, class Vec3, bool, bool);

    // symbol: ??1ChangeDimensionRequest@@QEAA@XZ
    MCAPI ~ChangeDimensionRequest();

    // NOLINTEND
};
