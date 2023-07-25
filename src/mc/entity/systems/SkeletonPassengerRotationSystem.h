#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkeletonPassengerRotationSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONPASSENGERROTATIONSYSTEM
public:
    SkeletonPassengerRotationSystem& operator=(SkeletonPassengerRotationSystem const&) = delete;
    SkeletonPassengerRotationSystem(SkeletonPassengerRotationSystem const&)            = delete;
    SkeletonPassengerRotationSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?createSkeletonPassengerRotationSystem\@SkeletonPassengerRotationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSkeletonPassengerRotationSystem();
};
