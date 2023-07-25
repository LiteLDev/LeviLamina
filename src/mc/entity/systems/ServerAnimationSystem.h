#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerAnimationSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERANIMATIONSYSTEM
public:
    ServerAnimationSystem& operator=(ServerAnimationSystem const&) = delete;
    ServerAnimationSystem(ServerAnimationSystem const&)            = delete;
    ServerAnimationSystem()                                        = delete;
#endif

public:
    /**
     * @symbol ?createServerAnimationSystem\@ServerAnimationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerAnimationSystem();
};
