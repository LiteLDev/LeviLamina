#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySystems;
struct DealKineticDamageComponent;
// clang-format on

namespace DealKineticDamageSystem {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void registerClientSystems(::EntitySystems& systemRegistry);
#endif

MCAPI void registerServerSystems(::EntitySystems& systemRegistry);

MCAPI void tryApplyDamageOrEffects(
    ::ActorOwnerComponent&        actorOwnerComponent,
    ::DealKineticDamageComponent& dealKineticDamageComponent
);
// NOLINTEND

} // namespace DealKineticDamageSystem
