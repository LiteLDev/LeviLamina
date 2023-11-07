#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class INetherNetTransportInterface {
public:
    // prevent constructor by default
    INetherNetTransportInterface& operator=(INetherNetTransportInterface const&);
    INetherNetTransportInterface(INetherNetTransportInterface const&);
    INetherNetTransportInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1INetherNetTransportInterface@NetherNet@@UEAA@XZ
    virtual ~INetherNetTransportInterface() = default;

    // NOLINTEND
};

}; // namespace NetherNet
