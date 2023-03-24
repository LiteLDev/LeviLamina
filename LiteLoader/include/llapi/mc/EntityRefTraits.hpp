
#pragma once
#include "llapi/Global.h"

#include "EntityContext.hpp"
#include "WeakStorageEntity.hpp"
#include "StackResultStorageEntity.hpp"
#include "OwnerStorageEntity.hpp"
#include "EntityRegistry.hpp"

struct EntityRefTraits {
public:
    using StackRef = EntityContext;
    using WeakStorage = WeakStorageEntity;
    using OwnerStorage = OwnerStorageEntity;
    using OwnerStackRef = StackRef;
    using StackResultStorage = StackResultStorageEntity;
};

struct EntityConstRefTraits : public EntityRefTraits {};
