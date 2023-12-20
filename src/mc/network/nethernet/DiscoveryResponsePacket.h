#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct DiscoveryResponsePacket {
public:
    // prevent constructor by default
    DiscoveryResponsePacket& operator=(DiscoveryResponsePacket const&);
    DiscoveryResponsePacket(DiscoveryResponsePacket const&);
    DiscoveryResponsePacket();
};

}; // namespace NetherNet
