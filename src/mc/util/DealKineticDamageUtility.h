#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class Mob;
struct ActorUniqueID;
struct DealKineticDamageComponent;
struct KineticDamageSettings;
// clang-format on

namespace DealKineticDamageUtility {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<int> getTicksSinceLastHit(::Mob const& owner);

MCNAPI void onKineticDamageDealt(::Mob& owner, ::ActorUniqueID const& target);

MCNAPI void onKineticDamageDealt(::Mob& owner, ::ActorUniqueID const& target, ::DealKineticDamageComponent& component);

MCNAPI void startDealingKineticDamage(::EntityContext& entityContext, ::KineticDamageSettings const& settings);

MCNAPI void stopDealingKineticDamage(::EntityContext& entityContext);

#ifdef LL_PLAT_C
MCNAPI void updateFromActorFlags(::Actor& owner);
#endif
// NOLINTEND

} // namespace DealKineticDamageUtility
