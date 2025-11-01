#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

namespace NetherNet {

struct DiscoveryResponsePacket : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4fea9b;
    ::ll::UntypedStorage<1, 1148> mUnk6b5fed;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryResponsePacket& operator=(DiscoveryResponsePacket const&);
    DiscoveryResponsePacket(DiscoveryResponsePacket const&);
    DiscoveryResponsePacket();

};

}
