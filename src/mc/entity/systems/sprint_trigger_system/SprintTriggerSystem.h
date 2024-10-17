#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace SprintTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createActionSystem();

MCAPI struct TickingSystemWithInfo createIntentSystem();

MCAPI struct TickingSystemWithInfo createSetRequestSystem();

MCAPI void doIntentTick(
    class Optional<struct ItemUseSlowdownModifierComponent const>        itemInUse,
    class Optional<struct OnGroundFlagComponent const> const&            onGround,
    class Optional<class FlagComponent<struct InWaterFlag> const> const& wasInWater,
    struct MovementAbilitiesComponent const&                             abilities,
    struct MobEffectsComponent const&                                    mobEffects,
    struct MoveInputComponent const&                                     moveInput,
    struct PlayerInputModeComponent const&                               playerInputMode,
    struct StateVectorComponent const&                                   stateVector,
    struct PlayerLastPosComponent const&                                 playerLastPos,
    struct ActorDataFlagComponent const&                                 synchedActorData,
    struct PlayerInputRequestComponent&                                  playerInputRequest,
    struct VanillaClientGameplayComponent&                               vanillaClientGameplay,
    struct PlayerActionComponent&                                        playerAction
);

MCAPI void doSetRequestTick(
    class StrictEntityContext const&                       entity,
    class Optional<struct PassengerComponent const> const& passenger,
    struct MovementAttributesComponent const&              attributes,
    struct PlayerInputRequestComponent&                    playerInputRequest,
    class ViewT<
        class StrictEntityContext,
        struct VehicleComponent,
        struct ActorDataControllingSeatIndexComponent const,
        class Optional<class FlagComponent<struct CanVehicleSprintFlag>>> const& vehicleView
);

MCAPI void setSprinting(
    class StrictEntityContext const&                        e,
    class EntityModifier<struct AttributeRequestComponent>& modifier,
    struct ActorDataFlagComponent&                          actorData,
    struct ActorDataDirtyFlagsComponent&                    dirtyFlags,
    bool                                                    shouldSprint
);
// NOLINTEND

}; // namespace SprintTriggerSystem
