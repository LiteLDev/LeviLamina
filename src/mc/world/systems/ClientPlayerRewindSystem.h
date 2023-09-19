#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientPlayerRewindSystem {
public:
    // prevent constructor by default
    ClientPlayerRewindSystem& operator=(ClientPlayerRewindSystem const&);
    ClientPlayerRewindSystem(ClientPlayerRewindSystem const&);
    ClientPlayerRewindSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ClientPlayerRewindSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doClientPlayerRewindSystem@ClientPlayerRewindSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@AEAVReplayStateComponent@@@Z
    MCAPI static void
    _doClientPlayerRewindSystem(class StrictEntityContext const&, class ActorOwnerComponent&, class ReplayStateComponent&);

    // NOLINTEND
};
