#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityIdTraits.h"

class EntityId : public entt::basic_entt_traits<EntityIdTraits> {
public:
    entity_type mRawId{};

    template <std::integral T>
        requires(!std::is_same_v<std::remove_cvref_t<T>, bool>)
    [[nodiscard]] constexpr EntityId(T rawId) : mRawId(static_cast<entity_type>(rawId)) {} // NOLINT

    [[nodiscard]] constexpr bool isNull() const { return *this == entt::null; }

    template <std::integral T>
        requires(!std::is_same_v<std::remove_cvref_t<T>, bool>)
    [[nodiscard]] constexpr operator T() const {
        return static_cast<T>(mRawId);
    }
};
