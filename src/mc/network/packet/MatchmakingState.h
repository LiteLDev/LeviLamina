#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MatchmakingState : uchar {
    Idle             = 0,
    Matchmaking      = 1,
    MatchFound       = 2,
    Canceled         = 3,
    PlayerLeftParty  = 4,
    PlayerLeftServer = 5,
    ServerShutdown   = 6,
    TimedOut         = 7,
    RequeueAsParty   = 8,
};
