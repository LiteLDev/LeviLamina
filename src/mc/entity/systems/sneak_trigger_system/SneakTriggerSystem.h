#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace SneakTriggerSystem { struct DetermineStatusArgs; }
namespace SneakTriggerSystem { struct PlayerStatusTransitions; }
// clang-format on

namespace SneakTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createActionSystem();

MCAPI struct TickingSystemWithInfo createIntentSystem();

MCAPI struct SneakTriggerSystem::PlayerStatusTransitions
determineStatus(struct SneakTriggerSystem::DetermineStatusArgs const& args);

MCAPI void doActionTick(
    entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>,
    class StrictEntityContext const&                                      entity,
    struct PlayerActionComponent const&                                   actions,
    struct ActorDataFlagComponent&                                        actorData,
    struct ActorDataDirtyFlagsComponent&                                  dirtyFlags,
    class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent>& modifier
);

MCAPI void doIntentTick(
    class StrictEntityContext const&,
    struct MoveInputComponent const&                              moveInput,
    struct ActorGameTypeComponent const&                          actorGameType,
    struct PlayerInputRequestComponent const&                     playerInputRequest,
    struct ActorDataFlagComponent const&                          actorDataFlag,
    struct PlayerActionComponent&                                 actions,
    class Optional<class FlagComponent<struct InWaterFlag> const> wasInWaterFlag,
    class Optional<struct PassengerComponent const>               passenger,
    class OptionalGlobal<struct BaseGameVersionComponent const>   baseGameVersion,
    struct ExternalDataInterface const&                           externalDataInterface
);
// NOLINTEND

}; // namespace SneakTriggerSystem
