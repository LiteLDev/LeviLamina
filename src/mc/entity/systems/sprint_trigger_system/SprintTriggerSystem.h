#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct AttributeRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace SprintTriggerSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createActionSystem();

MCAPI ::TickingSystemWithInfo createIntentSystem();

MCAPI ::TickingSystemWithInfo createSetRequestSystem();

MCAPI void setSprinting(
    ::StrictEntityContext const&                   entityContext,
    ::EntityModifier<::AttributeRequestComponent>& modifier,
    ::ActorDataFlagComponent&                      actorData,
    ::ActorDataDirtyFlagsComponent&                dirtyFlags,
    bool                                           shouldSprint
);
// NOLINTEND

} // namespace SprintTriggerSystem
