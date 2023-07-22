/**
 * @file  FramewiseActionOrStopSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FramewiseActionOrStopSystem.
 *
 */
class FramewiseActionOrStopSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FRAMEWISEACTIONORSTOPSYSTEM
public:
    class FramewiseActionOrStopSystem& operator=(class FramewiseActionOrStopSystem const &) = delete;
    FramewiseActionOrStopSystem(class FramewiseActionOrStopSystem const &) = delete;
    FramewiseActionOrStopSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFramewiseActionOrStopSystem();

//private:
    /**
     * @symbol  ?doFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@CAXAEAVStrictEntityContext\@\@AEBULocalMoveVelocityComponent\@\@AEAUActionOrStopComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UHasMoveInputFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void doFramewiseActionOrStopSystem(class StrictEntityContext &, struct LocalMoveVelocityComponent const &, struct ActionOrStopComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct HasMoveInputFlag>>);

private:

};