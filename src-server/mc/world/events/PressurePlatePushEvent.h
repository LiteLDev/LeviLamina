#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct PressurePlatePushEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mPressurePlateBlockPos;
    ::ll::TypedStorage<4, 4, int const> mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int const> mRedstonePower;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PressurePlatePushEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
