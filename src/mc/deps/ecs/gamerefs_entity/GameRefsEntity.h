#pragma once

class EntityContext;
class EntityId;

#include "mc/deps/ecs/gamerefs_entity/OwnerStorageEntity.h"
#include "mc/deps/ecs/gamerefs_entity/StackResultStorageEntity.h"
#include "mc/deps/ecs/gamerefs_entity/WeakStorageEntity.h"

template <>
struct GameRefs<EntityContext> {
    using OwnerStorage       = OwnerStorageEntity;
    using StackResultStorage = StackResultStorageEntity;
    using WeakStorage        = WeakStorageEntity;
    using StackRef           = EntityContext;
};

template <>
struct GameRefs<EntityContext const> {
    using OwnerStorage       = OwnerStorageEntity;
    using StackResultStorage = StackResultStorageEntity;
    using WeakStorage        = WeakStorageEntity;
    using StackRef           = EntityContext const;
};

template <>
struct GameRefs<EntityId> {
    using OwnerStorage       = OwnerStorageEntity;
    using StackResultStorage = StackResultStorageEntity;
    using WeakStorage        = WeakStorageEntity;
    using StackRef           = EntityContext;
};
