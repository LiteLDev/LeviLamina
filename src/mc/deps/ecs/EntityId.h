#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/ecs/EntityIdTraits.h"

// entt v4 constrains `entt::entt_traits` with the `entity_like` concept, which is
// only satisfied when `entt::internal::entt_traits` is defined for the type. It is
// also the traits the generic `entt::entt_traits` is built from, so specializing it
// makes `entt::entt_traits<EntityId>` resolve to `basic_entt_traits<EntityIdTraits>`.
namespace entt::internal {
template <>
struct entt_traits<EntityId> : EntityIdTraits {};
} // namespace entt::internal

class EntityId : public entt::entt_traits<EntityId> {
public:
    entity_type mRawId{entt::null};

    [[nodiscard]] constexpr EntityId() = default;

    [[nodiscard]] constexpr EntityId(entity_type rawId) : mRawId(rawId) {}

    [[nodiscard]] constexpr bool isNull() const { return *this == entt::null; }

    [[nodiscard]] constexpr operator entity_type() const { return mRawId; }
};
