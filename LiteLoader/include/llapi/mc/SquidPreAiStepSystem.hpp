/**
 * @file  SquidPreAiStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SquidPreAiStepSystem.
 *
 */
class SquidPreAiStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDPREAISTEPSYSTEM
public:
    class SquidPreAiStepSystem& operator=(class SquidPreAiStepSystem const &) = delete;
    SquidPreAiStepSystem(class SquidPreAiStepSystem const &) = delete;
    SquidPreAiStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SquidPreAiStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tick\@SquidPreAiStepSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@USquidFlag\@\@\@\@\@\@ULocalMoveVelocityComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct SquidFlag>>, struct LocalMoveVelocityComponent>);

//private:
    /**
     * @symbol ?_doSquidPreAiStepSystem\@SquidPreAiStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAULocalMoveVelocityComponent\@\@\@Z
     */
    MCAPI static void _doSquidPreAiStepSystem(class StrictEntityContext const &, struct LocalMoveVelocityComponent &);

private:

};
