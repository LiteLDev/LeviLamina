#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RNS2EventHandler {
public:
    // prevent constructor by default
    RNS2EventHandler& operator=(RNS2EventHandler const&) = delete;
    RNS2EventHandler(RNS2EventHandler const&)            = delete;
    RNS2EventHandler()                                   = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1RNS2EventHandler@RakNet@@UEAA@XZ
    MCVAPI ~RNS2EventHandler();

    // NOLINTEND
};

}; // namespace RakNet
