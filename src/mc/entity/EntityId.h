#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId : public entt::entt_traits<entt::id_type> {
public:
    entity_type mRawId;

    template <std::integral T>
    [[nodiscard]] constexpr EntityId(T rawId) : mRawId(static_cast<entity_type>(rawId)) {}

    template <std::integral T>
    [[nodiscard]] constexpr operator T() const {
        return static_cast<T>(mRawId);
    }
};
