#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

struct DiscoveryRequestPacket : public ::NetherNet::DiscoveryPacket {
public:
    // prevent constructor by default
    DiscoveryRequestPacket& operator=(DiscoveryRequestPacket const&);
    DiscoveryRequestPacket(DiscoveryRequestPacket const&);
    DiscoveryRequestPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DiscoveryRequestPacket(::NetherNet::NetworkID senderId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::NetworkID senderId);
    // NOLINTEND
};

} // namespace NetherNet
