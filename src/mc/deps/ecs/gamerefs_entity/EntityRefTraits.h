#pragma once

#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

#include "mc/deps/ecs/gamerefs_entity/OwnerStorageEntity.h"
#include "mc/deps/ecs/gamerefs_entity/StackResultStorageEntity.h"
#include "mc/deps/ecs/gamerefs_entity/WeakStorageEntity.h"

class EntityContext;

template <>
class OwnerPtr<EntityContext> : public OwnerStorageEntity {
    using OwnerStorageEntity::OwnerStorageEntity;
};
template <>
class StackRefResult<EntityContext> : public StackResultStorageEntity {
    using StackResultStorageEntity::StackResultStorageEntity;
};
template <>
class WeakRef<EntityContext> : public WeakStorageEntity {
    using WeakStorageEntity::WeakStorageEntity;
};
