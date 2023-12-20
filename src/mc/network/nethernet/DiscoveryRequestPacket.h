#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct DiscoveryRequestPacket {
public:
    // prevent constructor by default
    DiscoveryRequestPacket& operator=(DiscoveryRequestPacket const&);
    DiscoveryRequestPacket(DiscoveryRequestPacket const&);
    DiscoveryRequestPacket();
};

}; // namespace NetherNet
