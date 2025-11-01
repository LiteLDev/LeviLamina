#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

namespace NetherNet {

struct DiscoveryMessagePacket : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk829268;
    ::ll::UntypedStorage<4, 4> mUnk22205e;
    ::ll::UntypedStorage<1, 1140> mUnk9eddc0;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryMessagePacket& operator=(DiscoveryMessagePacket const&);
    DiscoveryMessagePacket(DiscoveryMessagePacket const&);
    DiscoveryMessagePacket();

};

}
