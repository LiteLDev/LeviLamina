/**
 * @file  WaterAnimalPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WaterAnimalPreAIStepSystem.
 *
 */
class WaterAnimalPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERANIMALPREAISTEPSYSTEM
public:
    class WaterAnimalPreAIStepSystem& operator=(class WaterAnimalPreAIStepSystem const &) = delete;
    WaterAnimalPreAIStepSystem(class WaterAnimalPreAIStepSystem const &) = delete;
    WaterAnimalPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@WaterAnimalPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doWaterAnimalPreAIStepSystem\@WaterAnimalPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doWaterAnimalPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};