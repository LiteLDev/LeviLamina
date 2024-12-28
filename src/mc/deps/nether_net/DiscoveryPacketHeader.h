#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacketType.h"

namespace NetherNet {

struct DiscoveryPacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk449f63;
    ::ll::UntypedStorage<2, 2> mUnkfa1d5f;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryPacketHeader& operator=(DiscoveryPacketHeader const&);
    DiscoveryPacketHeader(DiscoveryPacketHeader const&);
    DiscoveryPacketHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ushort PacketLength() const;

    MCAPI ::NetherNet::DiscoveryPacketType PacketType() const;
    // NOLINTEND
};

} // namespace NetherNet
