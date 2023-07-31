#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkeletonPassengerRotationSystem {

public:
    // prevent constructor by default
    SkeletonPassengerRotationSystem& operator=(SkeletonPassengerRotationSystem const&) = delete;
    SkeletonPassengerRotationSystem(SkeletonPassengerRotationSystem const&)            = delete;
    SkeletonPassengerRotationSystem()                                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createSkeletonPassengerRotationSystem\@SkeletonPassengerRotationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSkeletonPassengerRotationSystem();
    // NOLINTEND
};
