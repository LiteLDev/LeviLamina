#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct ItemInUseComponent;
struct ItemUseSlowdownModifierComponent;
struct PassengerComponent;
struct PlayerInputRequestComponent;
// clang-format on

namespace ItemUseSlowdownSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doItemUseSlowdownSystem(
    ::entt::type_list<
        ::Include<::InterpolateMovementNeededComponent, ::PlayerInputRequestComponent>,
        ::Exclude<::PassengerComponent>>,
    ::StrictEntityContext const&                         entity,
    ::ItemInUseComponent const&                          itemInUse,
    ::EntityModifier<::ItemUseSlowdownModifierComponent> entityModifier
);
// NOLINTEND

} // namespace ItemUseSlowdownSystemImpl
