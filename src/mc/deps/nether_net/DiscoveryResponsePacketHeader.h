#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

namespace NetherNet {

struct DiscoveryResponsePacketHeader : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdab1a9;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryResponsePacketHeader& operator=(DiscoveryResponsePacketHeader const&);
    DiscoveryResponsePacketHeader(DiscoveryResponsePacketHeader const&);
    DiscoveryResponsePacketHeader();
};

} // namespace NetherNet
