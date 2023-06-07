/**
 * @file  WaterSinkInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WaterSinkInputSystem.
 *
 */
class WaterSinkInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERSINKINPUTSYSTEM
public:
    class WaterSinkInputSystem& operator=(class WaterSinkInputSystem const &) = delete;
    WaterSinkInputSystem(class WaterSinkInputSystem const &) = delete;
    WaterSinkInputSystem() = delete;
#endif

public:
    /**
     * @symbol ?createWaterSinkInputSystem\@WaterSinkInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterSinkInputSystem();
    /**
     * @symbol ?doInWaterSinkInputSystem\@WaterSinkInputSystem\@\@SAXAEBUAbilitiesComponent\@\@AEBUMoveInputComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void doInWaterSinkInputSystem(struct AbilitiesComponent const &, struct MoveInputComponent const &, struct StateVectorComponent &);
    /**
     * @symbol ?tickWaterSinkInputSystem\@WaterSinkInputSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPlayerInputRequestComponent\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@$$CBUAbilitiesComponent\@\@$$CBUMoveInputComponent\@\@UStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void tickWaterSinkInputSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent, class FlagComponent<struct InWaterFlag>>, struct AbilitiesComponent const, struct MoveInputComponent const, struct StateVectorComponent>);

};
