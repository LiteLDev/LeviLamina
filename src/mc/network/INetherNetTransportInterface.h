#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class INetherNetTransportInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNET_INETHERNETTRANSPORTINTERFACE
public:
    INetherNetTransportInterface& operator=(INetherNetTransportInterface const&) = delete;
    INetherNetTransportInterface(INetherNetTransportInterface const&)            = delete;
    INetherNetTransportInterface()                                               = delete;
#endif

public:
};

}; // namespace NetherNet
