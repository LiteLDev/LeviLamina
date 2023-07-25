#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientPlayerRewindSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTPLAYERREWINDSYSTEM
public:
    ClientPlayerRewindSystem& operator=(ClientPlayerRewindSystem const&) = delete;
    ClientPlayerRewindSystem(ClientPlayerRewindSystem const&)            = delete;
    ClientPlayerRewindSystem()                                           = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ClientPlayerRewindSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doClientPlayerRewindSystem\@ClientPlayerRewindSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVReplayStateComponent\@\@\@Z
     */
    MCAPI static void
    _doClientPlayerRewindSystem(class StrictEntityContext const&, class ActorOwnerComponent&, class ReplayStateComponent&);

private:
};
