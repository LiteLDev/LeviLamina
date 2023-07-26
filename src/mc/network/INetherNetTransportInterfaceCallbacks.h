#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class INetherNetTransportInterfaceCallbacks {

public:
    // prevent constructor by default
    INetherNetTransportInterfaceCallbacks& operator=(INetherNetTransportInterfaceCallbacks const&) = delete;
    INetherNetTransportInterfaceCallbacks(INetherNetTransportInterfaceCallbacks const&)            = delete;
    INetherNetTransportInterfaceCallbacks()                                                        = delete;
};

}; // namespace NetherNet
