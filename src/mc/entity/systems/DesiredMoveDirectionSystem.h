#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DesiredMoveDirectionSystem {

public:
    // prevent constructor by default
    DesiredMoveDirectionSystem& operator=(DesiredMoveDirectionSystem const&) = delete;
    DesiredMoveDirectionSystem(DesiredMoveDirectionSystem const&)            = delete;
    DesiredMoveDirectionSystem()                                             = delete;

public:
    /**
     * @symbol ?createDesiredMoveDirectionSystem\@DesiredMoveDirectionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDesiredMoveDirectionSystem(); // NOLINT
};
