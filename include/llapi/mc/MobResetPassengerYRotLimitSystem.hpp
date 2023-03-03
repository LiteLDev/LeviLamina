/**
 * @file  MobResetPassengerYRotLimitSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MobResetPassengerYRotLimitSystem.
 *
 */
class MobResetPassengerYRotLimitSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBRESETPASSENGERYROTLIMITSYSTEM
public:
    class MobResetPassengerYRotLimitSystem& operator=(class MobResetPassengerYRotLimitSystem const &) = delete;
    MobResetPassengerYRotLimitSystem(class MobResetPassengerYRotLimitSystem const &) = delete;
    MobResetPassengerYRotLimitSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@MobResetPassengerYRotLimitSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_tickPassengerView\@MobResetPassengerYRotLimitSystem\@\@CAXAEAVStrictEntityContext\@\@AEAUPassengerYRotLimitComponent\@\@\@Z
     */
    MCAPI static void _tickPassengerView(class StrictEntityContext &, struct PassengerYRotLimitComponent &);

private:

};