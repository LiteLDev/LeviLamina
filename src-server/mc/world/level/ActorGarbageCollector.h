#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class ActorGarbageCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>> mPendingEntitiesToRemove;
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>> mDiscardedSerializingEntities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void garbageCollectEntity(::OwnerPtr<::EntityContext> entity);

    MCAPI void update();

    MCAPI ~ActorGarbageCollector();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
