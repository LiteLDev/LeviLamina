#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class PortPrunePolicy : int {
    NoPrune              = 0,
    PruneBasedOnPriority = 1,
    KeepFirstReady       = 2,
};

}
