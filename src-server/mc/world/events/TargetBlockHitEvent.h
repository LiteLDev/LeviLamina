#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct TargetBlockHitEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mTargetBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3 const> mHitVector;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mSource;
    ::ll::TypedStorage<4, 4, int const> mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int const> mRedstonePower;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TargetBlockHitEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
