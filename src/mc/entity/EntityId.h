#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId : public entt::entt_traits<entt::id_type> {
public:
    entity_type mRawId;

    constexpr EntityId(EntityId&&) = default;

    constexpr EntityId(EntityId const&) = default;

    constexpr EntityId& operator=(EntityId const&) = default;

    template <std::integral T>
    constexpr EntityId(T rawId) : mRawId(static_cast<entity_type>(rawId)) {}

    template <std::integral T>
    constexpr operator T() const {
        return mRawId;
    }
};
