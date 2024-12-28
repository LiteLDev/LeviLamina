#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacketHeader.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

struct DiscoveryPacket : public ::NetherNet::DiscoveryPacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk571fe1;
    ::ll::UntypedStorage<1, 8> mUnkdd53a8;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryPacket& operator=(DiscoveryPacket const&);
    DiscoveryPacket(DiscoveryPacket const&);
    DiscoveryPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NetherNet::NetworkID SenderId() const;
    // NOLINTEND
};

} // namespace NetherNet
