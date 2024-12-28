#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorGarbageCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd9edef;
    ::ll::UntypedStorage<8, 24> mUnkba024f;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorGarbageCollector& operator=(ActorGarbageCollector const&);
    ActorGarbageCollector(ActorGarbageCollector const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorGarbageCollector();

    MCAPI void clearChunkDiscardedEntities();

    MCAPI void clearPendingEntities();

    MCAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
