/**
 * @file  ShulkerPostAiStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerPostAiStepSystem.
 *
 */
class ShulkerPostAiStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERPOSTAISTEPSYSTEM
public:
    class ShulkerPostAiStepSystem& operator=(class ShulkerPostAiStepSystem const &) = delete;
    ShulkerPostAiStepSystem(class ShulkerPostAiStepSystem const &) = delete;
    ShulkerPostAiStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ShulkerPostAiStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doShulkerPostAiStepSystem\@ShulkerPostAiStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUActorRotationComponent\@\@AEAUMobBodyRotationComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _doShulkerPostAiStepSystem(class StrictEntityContext const &, struct ActorRotationComponent &, struct MobBodyRotationComponent &, struct StateVectorComponent &);

private:

};