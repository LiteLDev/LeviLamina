#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSourceHandle;
class EntityContext;
class Vec3;
// clang-format on

struct ActorGriefingBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>             mActorContext;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>>         mBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mPos;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle>> mBlockSourceHandle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorGriefingBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
