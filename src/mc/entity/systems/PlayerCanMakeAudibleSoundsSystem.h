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
// clang-format on

namespace PlayerCanMakeAudibleSoundsSystem {
// functions
// NOLINTBEGIN
MCNAPI void _doPlayerCanMakeAudibleSoundsSystem(
    ::entt::type_list<::Include<::ActorTickedComponent, ::PlayerComponent>>,
    ::StrictEntityContext const&                      entity,
    ::ActorOwnerComponent&                            owner,
    ::EntityModifier<::CanMakeAudibleSoundsComponent> entityModifier
);
// NOLINTEND

} // namespace PlayerCanMakeAudibleSoundsSystem
