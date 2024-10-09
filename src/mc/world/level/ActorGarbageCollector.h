#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

class ActorGarbageCollector {
public:
    // prevent constructor by default
    ActorGarbageCollector& operator=(ActorGarbageCollector const&);
    ActorGarbageCollector(ActorGarbageCollector const&);

public:
    // NOLINTBEGIN
    MCAPI ActorGarbageCollector();

    MCAPI void clearChunkDiscardedEntities();

    MCAPI void clearPendingEntities();

    MCAPI void garbageCollectEntity(class OwnerPtr<class EntityContext> entity);

    MCAPI void update();

    // NOLINTEND
};
