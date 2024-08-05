#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

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

    // protected:
    // NOLINTBEGIN
    MCAPI static std::atomic<uint> mRegistryCount;

    // NOLINTEND
};
