#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorTickedComponent;
struct CanMakeAudibleSoundsComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerCanMakeAudibleSoundsSystem {
// functions
// NOLINTBEGIN
MCAPI void _doPlayerCanMakeAudibleSoundsSystem(
    ::entt::type_list<::Include<::ActorTickedComponent, ::PlayerComponent>> entity,
    ::StrictEntityContext const&                                            owner,
    ::ActorOwnerComponent&                                                  entityModifier,
    ::EntityModifier<::CanMakeAudibleSoundsComponent>
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace PlayerCanMakeAudibleSoundsSystem
