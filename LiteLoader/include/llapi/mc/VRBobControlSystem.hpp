/**
 * @file  VRBobControlSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VRBobControlSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VRBOBCONTROLSYSTEM
public:
    class VRBobControlSystem& operator=(class VRBobControlSystem const &) = delete;
    VRBobControlSystem(class VRBobControlSystem const &) = delete;
    VRBobControlSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@VRBobControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};
