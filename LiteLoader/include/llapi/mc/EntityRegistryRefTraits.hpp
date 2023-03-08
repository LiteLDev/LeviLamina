#pragma once

#include "llapi/Global.h"
#include "EntityRegistry.hpp"

class EntityRegistryOwned : public EntityRegistry {
    entt::basic_registry<EntityId, std::allocator<EntityId> mOwnedRegistry;
};

struct EntityRegistryRefTraits {
public:
    using StackRef = EntityRegistry;
    using WeakStorage = WeakStorageSharePtr<StackRef>;
    using StackResultStorage = StackResultStorageSharePtr<StackRef>;
    using OwnerStackRef = EntityRegistryOwned;
    using OwnerStorage = OwnerStorageSharePtr<OwnerStackRef>;
};

struct EntityRegistryConstRefTraits : public EntityRegistryRefTraits {};