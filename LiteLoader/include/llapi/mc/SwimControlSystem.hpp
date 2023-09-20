/**
 * @file  SwimControlSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SwimControlSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMCONTROLSYSTEM
public:
    class SwimControlSystem& operator=(class SwimControlSystem const &) = delete;
    SwimControlSystem(class SwimControlSystem const &) = delete;
    SwimControlSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@SwimControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};
