#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId : public entt::entt_traits<entt::id_type> {
public:
    entity_type mRawId;

    constexpr EntityId(EntityId&&) = default;

    constexpr EntityId(const EntityId&) = default;

    constexpr EntityId& operator=(const EntityId&) = default;

    template <class T, std::enable_if_t<!(std::is_same_v<T, std::allocator<EntityId>> ||
                                          std::is_same_v<T, entt::null_t> || std::is_same_v<T, entt::tombstone_t>),
                                        int> = 0>
    constexpr EntityId(T rawId) : mRawId(static_cast<entity_type>(rawId)) {}

    constexpr operator entity_type() const {
        return mRawId;
    }
};
