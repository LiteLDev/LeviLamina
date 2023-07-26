#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class INetherNetTransportInterface {

public:
    // prevent constructor by default
    INetherNetTransportInterface& operator=(INetherNetTransportInterface const&) = delete;
    INetherNetTransportInterface(INetherNetTransportInterface const&)            = delete;
    INetherNetTransportInterface()                                               = delete;
};

}; // namespace NetherNet
