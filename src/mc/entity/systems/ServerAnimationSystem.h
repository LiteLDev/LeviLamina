#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerAnimationSystem {

public:
    // prevent constructor by default
    ServerAnimationSystem& operator=(ServerAnimationSystem const&) = delete;
    ServerAnimationSystem(ServerAnimationSystem const&)            = delete;
    ServerAnimationSystem()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createServerAnimationSystem\@ServerAnimationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerAnimationSystem();
    // NOLINTEND
};
