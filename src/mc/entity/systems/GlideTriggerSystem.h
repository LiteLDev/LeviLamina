#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class GlideTriggerSystem {

public:
    // prevent constructor by default
    GlideTriggerSystem& operator=(GlideTriggerSystem const&) = delete;
    GlideTriggerSystem(GlideTriggerSystem const&)            = delete;
    GlideTriggerSystem()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickGlideTriggerSystem\@GlideTriggerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUAbilitiesComponent\@\@AEBUFallFlyTicksComponent\@\@AEBUMoveInputComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUVanillaClientGameplayComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UArmorFlyEnabledFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    _tickGlideTriggerSystem(class StrictEntityContext const&, struct AABBShapeComponent const&, struct AbilitiesComponent const&, struct FallFlyTicksComponent const&, struct MoveInputComponent const&, struct StateVectorComponent const&, struct SynchedActorDataComponent const&, struct VanillaClientGameplayComponent const&, class Optional<class FlagComponent<struct ArmorFlyEnabledFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopGlidingRequestFlag>>&, class IConstBlockSource const&);
    /**
     * @symbol ?createSystem\@GlideTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
