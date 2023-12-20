#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifier.h"

namespace StartGlidingActionSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doStartGlidingAction@StartGlidingActionSystemImpl@@YAXAEBVStrictEntityContext@@AEBUPlayerActionComponent@@AEAUSynchedActorDataComponent@@V?$optional_ref@UElytraFlightTimeTicksComponent@@@@AEBUTick@@AEAV?$EntityModifier@UShouldUpdateBoundingBoxRequestComponent@@@@@Z
MCAPI void
doStartGlidingAction(class StrictEntityContext const&, struct PlayerActionComponent const&, struct SynchedActorDataComponent&, class optional_ref<struct ElytraFlightTimeTicksComponent>, struct Tick const&, class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent>&);
// NOLINTEND

}; // namespace StartGlidingActionSystemImpl
