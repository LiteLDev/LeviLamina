#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class BlockPos;
class BlockSourceHandle;
class EntityContext;
// clang-format on

struct ActorInsideBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext> const>             mActor;
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockLegacy const> const>          mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mPos;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorInsideBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
