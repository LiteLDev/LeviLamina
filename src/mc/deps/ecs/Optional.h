#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

template <typename T0>
class Optional {
public:
    using storage_type = entt::constness_as_t<entt::basic_storage<T0, EntityId, std::allocator<T0>, void>, T0>;
    using value_type   = T0;

    storage_type* mEnTTStorage;
    EntityId      mEntity;
};
