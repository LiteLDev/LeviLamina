#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Mob;
struct ActorUniqueID;
struct DealKineticDamageComponent;
struct KineticDamageSettings;
// clang-format on

namespace DealKineticDamageUtility {
// functions
// NOLINTBEGIN
MCNAPI void onKineticDamageDealt(::Mob& owner, ::ActorUniqueID const& target, ::DealKineticDamageComponent& component);

MCNAPI void startDealingKineticDamage(::EntityContext& entityContext, ::KineticDamageSettings const& settings);

MCNAPI_C void stopDealingKineticDamage(::EntityContext& entityContext);
// NOLINTEND

} // namespace DealKineticDamageUtility
