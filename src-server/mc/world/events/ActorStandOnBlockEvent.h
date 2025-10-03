#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class EntityContext;
// clang-format on

struct ActorStandOnBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext> const>  mActor;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const> const> mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                  mPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorStandOnBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
