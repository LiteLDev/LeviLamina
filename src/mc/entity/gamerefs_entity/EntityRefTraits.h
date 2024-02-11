#pragma once

#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"

#include "mc/entity/gamerefs_entity/OwnerStorageEntity.h"
#include "mc/entity/gamerefs_entity/StackResultStorageEntity.h"
#include "mc/entity/gamerefs_entity/WeakStorageEntity.h"

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
