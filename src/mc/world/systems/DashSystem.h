#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DashSystem {

public:
    // prevent constructor by default
    DashSystem& operator=(DashSystem const&) = delete;
    DashSystem(DashSystem const&)            = delete;
    DashSystem()                             = delete;

public:
    /**
     * @symbol ?createSystem\@DashSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
