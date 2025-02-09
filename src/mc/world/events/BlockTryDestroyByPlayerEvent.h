#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class EntityContext;
class ItemStack;
// clang-format on

struct BlockTryDestroyByPlayerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 8, ::Block const&>              mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>           mPos;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mItemUsed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockTryDestroyByPlayerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
