#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SprintTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createActionSystem();

MCAPI struct TickingSystemWithInfo createIntentSystem();

MCAPI struct TickingSystemWithInfo createSetRequestSystem();

MCAPI void doIntentTick(class Optional<struct ItemUseSlowdownModifierComponent const>, class Optional<struct OnGroundFlagComponent const> const&, class Optional<class FlagComponent<struct InWaterFlag> const> const&, struct MovementAbilitiesComponent const&, struct MobEffectsComponent const&, struct MoveInputComponent const&, struct PlayerInputModeComponent const&, struct StateVectorComponent const&, struct PlayerLastPosComponent const&, struct ActorDataFlagComponent const&, struct PlayerInputRequestComponent&, struct VanillaClientGameplayComponent&, struct PlayerActionComponent&);

MCAPI void
doSetRequestTick(class StrictEntityContext const&, class Optional<struct PassengerComponent const> const&, struct MovementAttributesComponent const&, struct PlayerInputRequestComponent&, class ViewT<class StrictEntityContext, struct VehicleComponent, struct ActorDataControllingSeatIndexComponent const, class Optional<class FlagComponent<struct CanVehicleSprintFlag>>> const&);

MCAPI void setSprinting(
    class StrictEntityContext const&,
    class EntityModifier<struct AttributeRequestComponent>&,
    struct ActorDataFlagComponent&,
    struct ActorDataDirtyFlagsComponent&,
    bool
);
// NOLINTEND

}; // namespace SprintTriggerSystem
