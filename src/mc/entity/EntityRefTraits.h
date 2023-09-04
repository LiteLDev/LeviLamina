#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityContext.h"
#include "mc/entity/gamerefs_entity/OwnerStorageEntity.h"
#include "mc/entity/gamerefs_entity/StackResultStorageEntity.h"
#include "mc/entity/gamerefs_entity/WeakStorageEntity.h"

struct EntityRefTraits {
public:
    using StackRef           = EntityContext;
    using OwnerStackRef      = StackRef;
    using WeakStorage        = WeakStorageEntity;
    using OwnerStorage       = OwnerStorageEntity;
    using StackResultStorage = StackResultStorageEntity;
};
