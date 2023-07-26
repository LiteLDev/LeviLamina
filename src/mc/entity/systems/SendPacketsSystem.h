#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendPacketsSystem {

public:
    // prevent constructor by default
    SendPacketsSystem& operator=(SendPacketsSystem const&) = delete;
    SendPacketsSystem(SendPacketsSystem const&)            = delete;
    SendPacketsSystem()                                    = delete;

public:
    /**
     * @symbol ?createSendPacketsSystem\@SendPacketsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSendPacketsSystem(); // NOLINT
};
