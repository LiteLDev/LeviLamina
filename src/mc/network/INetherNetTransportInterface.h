#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class INetherNetTransportInterface {
public:
    // prevent constructor by default
    INetherNetTransportInterface& operator=(INetherNetTransportInterface const&);
    INetherNetTransportInterface(INetherNetTransportInterface const&);
    INetherNetTransportInterface();
};

}; // namespace NetherNet
