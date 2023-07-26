#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientPlayerRewindSystem {

public:
    // prevent constructor by default
    ClientPlayerRewindSystem& operator=(ClientPlayerRewindSystem const&) = delete;
    ClientPlayerRewindSystem(ClientPlayerRewindSystem const&)            = delete;
    ClientPlayerRewindSystem()                                           = delete;

public:
    /**
     * @symbol ?createSystem\@ClientPlayerRewindSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doClientPlayerRewindSystem\@ClientPlayerRewindSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVReplayStateComponent\@\@\@Z
     */
    MCAPI static void
    _doClientPlayerRewindSystem(class StrictEntityContext const&, class ActorOwnerComponent&, class ReplayStateComponent&); // NOLINT

private:
};
