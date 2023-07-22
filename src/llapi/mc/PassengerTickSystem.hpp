/**
 * @file  PassengerTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PassengerTickSystem.
 *
 */
class PassengerTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERTICKSYSTEM
public:
    class PassengerTickSystem& operator=(class PassengerTickSystem const &) = delete;
    PassengerTickSystem(class PassengerTickSystem const &) = delete;
    PassengerTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createMobPostPassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMobPostPassengerTickSystem();
    /**
     * @symbol  ?createPlayerPostPassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPostPassengerTickSystem();
    /**
     * @symbol  ?createPlayerPrePassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPrePassengerTickSystem();

};