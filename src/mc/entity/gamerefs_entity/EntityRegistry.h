#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityId.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

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

    // protected:
    // NOLINTBEGIN
    MCAPI static std::atomic<uint> mRegistryCount;

    // NOLINTEND
};
