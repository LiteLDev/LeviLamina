#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendPacketsSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDPACKETSSYSTEM
public:
    SendPacketsSystem& operator=(SendPacketsSystem const&) = delete;
    SendPacketsSystem(SendPacketsSystem const&)            = delete;
    SendPacketsSystem()                                    = delete;
#endif

public:
    /**
     * @symbol ?createSendPacketsSystem\@SendPacketsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSendPacketsSystem();
};
