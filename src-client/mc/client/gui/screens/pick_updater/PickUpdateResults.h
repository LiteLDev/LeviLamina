#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/HitResult.h"

namespace PickUpdater {

struct PickUpdateResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mIsPicking;
    ::ll::TypedStorage<1, 1, bool>          mUpdateHitResults;
    ::ll::TypedStorage<1, 1, bool>          mUpdateDirection;
    ::ll::TypedStorage<1, 1, bool>          mComputePickResult;
    ::ll::TypedStorage<4, 12, ::Vec3>       mCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3>       mNewPickDirection;
    ::ll::TypedStorage<8, 136, ::HitResult> mHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult> mLiquidHitResult;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PickUpdateResults();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PickUpdater
