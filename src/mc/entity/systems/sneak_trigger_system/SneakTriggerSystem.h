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
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                                 entity,
    ::PlayerActionComponent const&                               actions,
    ::ActorDataFlagComponent&                                    actorData,
    ::ActorDataDirtyFlagsComponent&                              dirtyFlags,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>& modifier
);

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
