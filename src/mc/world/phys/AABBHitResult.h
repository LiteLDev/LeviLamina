#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/FacingID.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

struct AABBHitResult {
public:
    Vec3     mStartPos;
    Vec3     mRayDir;
    Vec3     mPos;
    BlockPos mBlock;
    FacingID mFacing;
    bool     mIsHit;
};
