#pragma once

#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

#include "mc/deps/ecs/gamerefs_entity/OwnerStorageEntity.h"
#include "mc/deps/ecs/gamerefs_entity/StackResultStorageEntity.h"
#include "mc/deps/ecs/gamerefs_entity/WeakStorageEntity.h"

class EntityContext;
class EntityId;

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
