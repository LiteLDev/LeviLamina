#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RNS2EventHandler {
public:
    // prevent constructor by default
    RNS2EventHandler& operator=(RNS2EventHandler const&);
    RNS2EventHandler(RNS2EventHandler const&);
    RNS2EventHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RNS2EventHandler@RakNet@@UEAA@XZ
    virtual ~RNS2EventHandler();

    // NOLINTEND
};

}; // namespace RakNet
