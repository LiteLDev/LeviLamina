#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct AttributeRequestComponent;
struct ExhaustionComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace JumpExhaustionSystem {
// functions
// NOLINTBEGIN
MCNAPI void _doJumpExhaustion(
    ::StrictEntityContext const&                   entity,
    ::ActorDataFlagComponent const&                actorDataFlagComponent,
    ::ActorGameTypeComponent const&                actorGameTypeComponent,
    ::ExhaustionComponent const&                   exhaustionComponent,
    ::EntityModifier<::AttributeRequestComponent>& modifier,
    ::GameType const&                              defaultGameType
);

MCNAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace JumpExhaustionSystem
