#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct NetherNetTransportServerConfiguration {

public:
    // prevent constructor by default
    NetherNetTransportServerConfiguration& operator=(NetherNetTransportServerConfiguration const&) = delete;
    NetherNetTransportServerConfiguration(NetherNetTransportServerConfiguration const&)            = delete;
    NetherNetTransportServerConfiguration()                                                        = delete;
};

}; // namespace NetherNet
