#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/EntityId.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

class EntityRegistry : public std::enable_shared_from_this<EntityRegistry> {
public:
    // prevent constructor by default
    EntityRegistry& operator=(EntityRegistry const&);
    EntityRegistry(EntityRegistry const&);

    std::string                    mName;          // this+0x10
    entt::basic_registry<EntityId> mOwnedRegistry; // this+0x30
    uint                           mId;            // this+0x150

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
