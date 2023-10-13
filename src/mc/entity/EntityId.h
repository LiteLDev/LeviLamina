#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId : public entt::entt_traits<entt::id_type> {
public:
    entity_type mRawId;

    constexpr EntityId(EntityId&&) = default;

    constexpr EntityId(EntityId const&) = default;

    constexpr EntityId& operator=(EntityId const&) = default;

    template <typename T>
    constexpr EntityId(T rawId)
        requires(
            !(std::is_same_v<T, std::allocator<EntityId>> || std::is_same_v<T, entt::null_t>
              || std::is_same_v<T, entt::tombstone_t>)
        )
    : mRawId(static_cast<entity_type>(rawId)) {}

    constexpr operator entity_type() const { return mRawId; }
};
