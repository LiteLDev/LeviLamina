#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

namespace NetherNet {

struct DiscoveryMessagePacketHeader : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1c0b63;
    ::ll::UntypedStorage<4, 4> mUnk9d570d;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryMessagePacketHeader& operator=(DiscoveryMessagePacketHeader const&);
    DiscoveryMessagePacketHeader(DiscoveryMessagePacketHeader const&);
    DiscoveryMessagePacketHeader();
};

} // namespace NetherNet
