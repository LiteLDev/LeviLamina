#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId : public entt::entt_traits<entt::id_type> {
public:
    entity_type mRawId;

    [[nodiscard]] constexpr EntityId(EntityId&&) = default;

    [[nodiscard]] constexpr EntityId(EntityId const&) = default;

    [[nodiscard]] constexpr EntityId& operator=(EntityId const&) = default;

    template <std::integral T>
    [[nodiscard]] constexpr EntityId(T rawId) : mRawId(static_cast<entity_type>(rawId)) {}

    template <std::integral T>
    [[nodiscard]] constexpr operator T() const {
        return mRawId;
    }
};
