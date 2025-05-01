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
    ::ll::UntypedStorage<8, 24> mUnkf30b7b;
    ::ll::UntypedStorage<8, 24> mUnkba024f;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorGarbageCollector& operator=(ActorGarbageCollector const&);
    ActorGarbageCollector(ActorGarbageCollector const&);
    ActorGarbageCollector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void garbageCollectEntity(::OwnerPtr<::EntityContext> entity);

    MCNAPI void update();

    MCNAPI ~ActorGarbageCollector();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
