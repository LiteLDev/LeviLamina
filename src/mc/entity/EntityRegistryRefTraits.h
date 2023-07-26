#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/gamerefs_entity/EntityRegistry.h"
#include "mc/common/wrapper/Ref.h"

struct EntityRegistryRefTraits {

public:
    using StackRef           = EntityRegistry;
    using WeakStorage        = WeakStorageSharePtr<StackRef>;
    using StackResultStorage = StackResultStorageSharePtr<StackRef>;
    using OwnerStackRef      = StackRef;
    using OwnerStorage       = OwnerStorageSharePtr<OwnerStackRef>;
};
