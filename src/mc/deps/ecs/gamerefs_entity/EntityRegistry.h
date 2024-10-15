#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

class EntityRegistry {
public:
    // prevent constructor by default
    EntityRegistry& operator=(EntityRegistry const&);
    EntityRegistry(EntityRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI EntityRegistry();

    MCAPI explicit EntityRegistry(std::string identifier);

    MCAPI class WeakRef<class EntityRegistry> getWeakRef();

    MCAPI ~EntityRegistry();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class EntityContext _createEntity();

    MCAPI void _destroyEntity(class EntityContext entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(std::string identifier);

    MCAPI void dtor$();

    MCAPI static std::atomic<uint>& mRegistryCount();

    // NOLINTEND
};
