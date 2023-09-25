/**
 * @file  StopGlidingIntentSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StopGlidingIntentSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPGLIDINGINTENTSYSTEM
public:
    class StopGlidingIntentSystem& operator=(class StopGlidingIntentSystem const &) = delete;
    StopGlidingIntentSystem(class StopGlidingIntentSystem const &) = delete;
    StopGlidingIntentSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@StopGlidingIntentSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
