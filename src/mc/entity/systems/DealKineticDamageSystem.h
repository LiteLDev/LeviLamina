#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySystems;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct DealKineticDamageComponent;
struct InterpolateMovementNeededComponent;
struct IsDeadFlagComponent;
struct MobFlagComponent;
// clang-format on

namespace DealKineticDamageSystem {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void registerClientSystems(::EntitySystems& systemRegistry);
#endif

MCAPI void registerServerSystems(::EntitySystems& systemRegistry);

MCAPI void removeIfDone(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent>> entity,
    ::StrictEntityContext const&                                       dealKineticDamageComponent,
    ::DealKineticDamageComponent const&                                dealKineticDamageComponentModifier,
    ::EntityModifier<::DealKineticDamageComponent>
);

MCAPI void tryApplyDamageOrEffects(
    ::entt::type_list<
        ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>,
        ::Exclude<::IsDeadFlagComponent>> actorOwnerComponent,
    ::ActorOwnerComponent&                dealKineticDamageComponent,
    ::DealKineticDamageComponent&
);
// NOLINTEND

} // namespace DealKineticDamageSystem
