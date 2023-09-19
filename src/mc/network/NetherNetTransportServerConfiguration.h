#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct NetherNetTransportServerConfiguration {
public:
    // prevent constructor by default
    NetherNetTransportServerConfiguration& operator=(NetherNetTransportServerConfiguration const&);
    NetherNetTransportServerConfiguration(NetherNetTransportServerConfiguration const&);
    NetherNetTransportServerConfiguration();
};

}; // namespace NetherNet
