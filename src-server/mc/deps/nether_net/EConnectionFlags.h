#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum class EConnectionFlags : int {
    // bitfield representation
    EConnectionFlagsNone                        = 0,
    EConnectionFlagsRelayOnly                   = 1 << 0,
    EConnectionFlagsNoTCPCandidates             = 1 << 1,
    EConnectionFlagsNoLocalCandidates           = 1 << 2,
    EConnectionFlagsNoServerReflexiveCandidates = 1 << 3,
    EConnectionFlagsNoPeerReflexiveCandidates   = 1 << 4,
    EConnectionFlagsNoRelayCandidates           = 1 << 5,
};

}
