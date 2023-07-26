/**
 * @file  GlideTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GlideTriggerSystem.
 *
 */
class GlideTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDETRIGGERSYSTEM
public:
    class GlideTriggerSystem& operator=(class GlideTriggerSystem const &) = delete;
    GlideTriggerSystem(class GlideTriggerSystem const &) = delete;
    GlideTriggerSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_tickGlideTriggerSystem\@GlideTriggerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUAbilitiesComponent\@\@AEBUFallFlyTicksComponent\@\@AEBUMoveInputComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUVanillaClientGameplayComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UArmorFlyEnabledFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _tickGlideTriggerSystem(class StrictEntityContext const &, struct AABBShapeComponent const &, struct AbilitiesComponent const &, struct FallFlyTicksComponent const &, struct MoveInputComponent const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, struct VanillaClientGameplayComponent const &, class Optional<class FlagComponent<struct ArmorFlyEnabledFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopGlidingRequestFlag>> &, class IConstBlockSource const &);
    /**
     * @symbol  ?createSideBySideSystem\@GlideTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideSystem();
    /**
     * @symbol  ?createSystem\@GlideTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};