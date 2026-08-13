#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct BaseGameVersionComponent;
struct ExternalDataInterface;
struct MoveInputComponent;
struct PassengerComponent;
struct PlayerActionComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
// clang-format on

namespace SneakTriggerSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createActionSystem();

MCAPI ::TickingSystemWithInfo createIntentSystem();

MCAPI void doIntentTick(
    ::StrictEntityContext const&,
    ::MoveInputComponent const&                        moveInput,
    ::ActorGameTypeComponent const&                    actorGameType,
    ::PlayerInputRequestComponent const&               playerInputRequest,
    ::ActorDataFlagComponent const&                    actorDataFlag,
    ::PlayerActionComponent&                           actions,
    ::Optional<::WasInWaterFlagComponent const>        wasInWaterFlag,
    ::Optional<::PassengerComponent const>             passenger,
    ::OptionalGlobal<::BaseGameVersionComponent const> baseGameVersion,
    ::ExternalDataInterface const&                     externalDataInterface
);
// NOLINTEND

} // namespace SneakTriggerSystem
