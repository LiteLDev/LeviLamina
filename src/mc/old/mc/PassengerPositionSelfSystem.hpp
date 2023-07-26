/**
 * @file  PassengerPositionSelfSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PassengerPositionSelfSystem.
 *
 */
class PassengerPositionSelfSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERPOSITIONSELFSYSTEM
public:
    class PassengerPositionSelfSystem& operator=(class PassengerPositionSelfSystem const &) = delete;
    PassengerPositionSelfSystem(class PassengerPositionSelfSystem const &) = delete;
    PassengerPositionSelfSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@PassengerPositionSelfSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doPassengerPositionSelfSystem\@PassengerPositionSelfSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _doPassengerPositionSelfSystem(class StrictEntityContext const &, struct PassengerComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);

private:

};