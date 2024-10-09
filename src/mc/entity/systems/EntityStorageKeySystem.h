#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeySystem {
public:
    // prevent constructor by default
    EntityStorageKeySystem& operator=(EntityStorageKeySystem const&);
    EntityStorageKeySystem(EntityStorageKeySystem const&);
    EntityStorageKeySystem();

public:
    // NOLINTBEGIN
    MCAPI static std::string generateStorageKey(int64 actorId);

    MCAPI static bool
    getIsDirtySinceSerialization(class EntityContext& entity, std::string const& currentSerializedState);

    MCAPI static void setDirtyFromNonSerializedState(class EntityContext& entity);

    MCAPI static void setLastSerializedState(class EntityContext& entity, std::string const& currentSerializedState);

    // NOLINTEND
};
