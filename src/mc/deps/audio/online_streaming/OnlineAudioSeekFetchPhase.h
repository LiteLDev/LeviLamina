#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class OnlineAudioSeekFetchPhase : int {
    None     = 0,
    Pending  = 1,
    Fetching = 2,
    Ready    = 3,
    Stopped  = 4,
};

}
