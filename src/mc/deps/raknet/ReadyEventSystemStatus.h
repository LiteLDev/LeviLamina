#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class ReadyEventSystemStatus : int {
    NotWaiting   = 0,
    Waiting      = 1,
    Ready        = 2,
    AllReady     = 3,
    UnknownEvent = 4,
};

}
