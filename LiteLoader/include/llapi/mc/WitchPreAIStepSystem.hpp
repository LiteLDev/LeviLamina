/**
 * @file  WitchPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WitchPreAIStepSystem.
 *
 */
class WitchPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITCHPREAISTEPSYSTEM
public:
    class WitchPreAIStepSystem& operator=(class WitchPreAIStepSystem const &) = delete;
    WitchPreAIStepSystem(class WitchPreAIStepSystem const &) = delete;
    WitchPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@WitchPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doWitchPreAIStepSystem\@WitchPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doWitchPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);
    /**
     * @symbol ?_tickWitchPreAIStepSystem\@WitchPreAIStepSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UWitchFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickWitchPreAIStepSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct WitchFlag>>, class ActorOwnerComponent>);

private:

};
