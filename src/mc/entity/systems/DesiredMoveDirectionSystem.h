#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DesiredMoveDirectionSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESIREDMOVEDIRECTIONSYSTEM
public:
    DesiredMoveDirectionSystem& operator=(DesiredMoveDirectionSystem const&) = delete;
    DesiredMoveDirectionSystem(DesiredMoveDirectionSystem const&)            = delete;
    DesiredMoveDirectionSystem()                                             = delete;
#endif

public:
    /**
     * @symbol ?createDesiredMoveDirectionSystem\@DesiredMoveDirectionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDesiredMoveDirectionSystem();
};
