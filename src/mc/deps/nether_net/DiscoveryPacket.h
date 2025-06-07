#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacketHeader.h"

namespace NetherNet {

struct DiscoveryPacket : public ::NetherNet::DiscoveryPacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb0714a;
    ::ll::UntypedStorage<1, 8> mUnkdd53a8;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryPacket& operator=(DiscoveryPacket const&);
    DiscoveryPacket(DiscoveryPacket const&);
    DiscoveryPacket();
};

} // namespace NetherNet
