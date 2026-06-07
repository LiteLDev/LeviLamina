#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ItemInUseComponent;
struct ItemUseSlowdownModifierComponent;
struct PassengerComponent;
struct PlayerInputRequestComponent;
// clang-format on

namespace ItemUseSlowdownSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doItemUseSlowdownSystem(
    ::entt::type_list<
        ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent>,
        ::Exclude<::PassengerComponent>> entity,
    ::StrictEntityContext const&         itemInUse,
    ::ItemInUseComponent const&          entityModifier,
    ::EntityModifier<::ItemUseSlowdownModifierComponent>
);
// NOLINTEND

} // namespace ItemUseSlowdownSystemImpl
