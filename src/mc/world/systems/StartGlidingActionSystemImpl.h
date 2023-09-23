#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifierT.h"

namespace StartGlidingActionSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doStartGlidingAction@StartGlidingActionSystemImpl@@YAXAEBVStrictEntityContext@@AEBUPlayerActionComponent@@AEAUSynchedActorDataComponent@@V?$optional_ref@UElytraFlightTimeTicksComponent@@@@AEBUTick@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UShouldUpdateBoundingBoxRequestComponent@@@@@Z
MCAPI void
doStartGlidingAction(class StrictEntityContext const&, struct PlayerActionComponent const&, struct SynchedActorDataComponent&, class optional_ref<struct ElytraFlightTimeTicksComponent>, struct Tick const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldUpdateBoundingBoxRequestComponent>&);
// NOLINTEND

}; // namespace StartGlidingActionSystemImpl
