/**
 * @file  StartGlidingIntentSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StartGlidingIntentSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGLIDINGINTENTSYSTEM
public:
    class StartGlidingIntentSystem& operator=(class StartGlidingIntentSystem const &) = delete;
    StartGlidingIntentSystem(class StartGlidingIntentSystem const &) = delete;
    StartGlidingIntentSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@StartGlidingIntentSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
