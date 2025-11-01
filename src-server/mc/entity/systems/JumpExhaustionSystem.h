#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct AttributeRequestComponent;
struct ExhaustionComponent;
struct ExternalDataComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
struct TriggerJumpRequestComponent;
// clang-format on

namespace JumpExhaustionSystem {
// functions
// NOLINTBEGIN
MCNAPI void _doJumpExhaustion(::StrictEntityContext const& entity, ::ActorDataFlagComponent const& actorDataFlagComponent, ::ActorGameTypeComponent const& actorGameTypeComponent, ::ExhaustionComponent const& exhaustionComponent, ::EntityModifier<::AttributeRequestComponent>& modifier, ::GameType const& defaultGameType);

MCNAPI void _tickJumpExhaustion(::ViewT<::StrictEntityContext, ::Include<::TriggerJumpRequestComponent, ::PlayerComponent>, ::ActorDataFlagComponent const, ::ActorGameTypeComponent const, ::ExhaustionComponent const> view, ::EntityModifier<::AttributeRequestComponent> modifier, ::OptionalGlobal<::ExternalDataComponent> externalData);

MCNAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

}
