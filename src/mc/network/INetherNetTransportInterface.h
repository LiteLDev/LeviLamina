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
    // vIndex: 0, symbol: ??1INetherNetTransportInterface@@@UEAA@XZ
    virtual ~INetherNetTransportInterface();

    // NOLINTEND
};

}; // namespace NetherNet
