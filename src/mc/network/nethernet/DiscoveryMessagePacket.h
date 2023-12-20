#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct DiscoveryMessagePacket {
public:
    // prevent constructor by default
    DiscoveryMessagePacket& operator=(DiscoveryMessagePacket const&);
    DiscoveryMessagePacket(DiscoveryMessagePacket const&);
    DiscoveryMessagePacket();
};

}; // namespace NetherNet
