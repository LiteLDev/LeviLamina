#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class EntityContext;
// clang-format on

struct PlayerDestroyBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>     mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mBlockPos;
    ::ll::TypedStorage<1, 1, uchar>                           mFace;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerDestroyBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
