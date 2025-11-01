#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class Channels : int {
    Left          = 0,
    Right         = 1,
    Center        = 2,
    Lfe           = 3,
    BackLeft      = 4,
    BackRight     = 5,
    LeftOfCenter  = 6,
    RightOfCenter = 7,
    BackCenter    = 8,
    SideLeft      = 9,
    SideRight     = 10,
    ChannelsMax   = 10,
};

}
