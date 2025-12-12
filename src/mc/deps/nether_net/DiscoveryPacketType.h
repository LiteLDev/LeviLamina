#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum class DiscoveryPacketType : ushort {
    Request  = 0,
    Response = 1,
    Message  = 2,
};

}
