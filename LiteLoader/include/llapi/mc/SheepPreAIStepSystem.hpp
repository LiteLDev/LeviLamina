/**
 * @file  SheepPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SheepPreAIStepSystem.
 *
 */
class SheepPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEPPREAISTEPSYSTEM
public:
    class SheepPreAIStepSystem& operator=(class SheepPreAIStepSystem const &) = delete;
    SheepPreAIStepSystem(class SheepPreAIStepSystem const &) = delete;
    SheepPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SheepPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doSheepPreAIStepSystem\@SheepPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSheepPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);
    /**
     * @symbol ?_tickSheepPreAIStepSystem\@SheepPreAIStepSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@USheepFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickSheepPreAIStepSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct SheepFlag>>, class ActorOwnerComponent>);

private:

};
