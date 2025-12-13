#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceAttributeType : int {
    Priority                 = 36,
    UseCandidate             = 37,
    IceControlled            = 32809,
    IceControlling           = 32810,
    Nomination               = 49153,
    GoogNetworkInfo          = 49239,
    GoogLastIceCheckReceived = 49240,
    GoogMiscInfo             = 49241,
    GoogObsolete1            = 49242,
    GoogConnectionId         = 49243,
    GoogDelta                = 49244,
    GoogDeltaAck             = 49245,
    GoogDeltaSyncReq         = 49246,
    GoogMessageIntegrity32   = 49248,
};

}
