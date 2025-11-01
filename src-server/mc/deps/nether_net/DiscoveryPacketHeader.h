#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

};

}
