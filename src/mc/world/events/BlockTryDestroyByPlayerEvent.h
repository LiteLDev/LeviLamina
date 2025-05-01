#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class EntityContext;
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
    // prevent constructor by default
    BlockTryDestroyByPlayerEvent& operator=(BlockTryDestroyByPlayerEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockTryDestroyByPlayerEvent(::BlockTryDestroyByPlayerEvent const&);

    MCNAPI BlockTryDestroyByPlayerEvent(::BlockTryDestroyByPlayerEvent&&);

    MCNAPI ~BlockTryDestroyByPlayerEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockTryDestroyByPlayerEvent const&);

    MCNAPI void* $ctor(::BlockTryDestroyByPlayerEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
