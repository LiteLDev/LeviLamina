#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct MobIsSuffocatingFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobSuffocationDamageSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickApplySuffocation(
    ::entt::type_list<::Include<::MobIsSuffocatingFlagComponent>>,
    ::StrictEntityContext const&                      entity,
    ::ActorOwnerComponent&                            actorOwnerComponent,
    ::EntityModifier<::MobIsSuffocatingFlagComponent> modifier
);

MCAPI ::TickingSystemWithInfo create();
// NOLINTEND

} // namespace MobSuffocationDamageSystem
