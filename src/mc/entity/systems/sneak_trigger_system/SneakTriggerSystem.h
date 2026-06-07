#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct BaseGameVersionComponent;
struct ExternalDataInterface;
struct MoveInputComponent;
struct PassengerComponent;
struct PlayerActionComponent;
struct PlayerInputRequestComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
namespace SneakTriggerSystem { struct DetermineStatusArgs; }
namespace SneakTriggerSystem { struct PlayerStatusTransitions; }
// clang-format on

namespace SneakTriggerSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createActionSystem();

MCAPI ::TickingSystemWithInfo createIntentSystem();

MCAPI ::SneakTriggerSystem::PlayerStatusTransitions
determineStatus(::SneakTriggerSystem::DetermineStatusArgs const& args);

MCAPI void doActionTick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                     actions,
    ::PlayerActionComponent const&                                   actorData,
    ::ActorDataFlagComponent&                                        dirtyFlags,
    ::ActorDataDirtyFlagsComponent&                                  modifier,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>&
);

MCAPI void doIntentTick(
    ::StrictEntityContext const&                       moveInput,
    ::MoveInputComponent const&                        actorGameType,
    ::ActorGameTypeComponent const&                    playerInputRequest,
    ::PlayerInputRequestComponent const&               actorDataFlag,
    ::ActorDataFlagComponent const&                    actions,
    ::PlayerActionComponent&                           wasInWaterFlag,
    ::Optional<::WasInWaterFlagComponent const>        passenger,
    ::Optional<::PassengerComponent const>             baseGameVersion,
    ::OptionalGlobal<::BaseGameVersionComponent const> externalDataInterface,
    ::ExternalDataInterface const&
);
// NOLINTEND

} // namespace SneakTriggerSystem
