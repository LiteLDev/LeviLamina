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
    // vIndex: 0
    virtual ~RNS2EventHandler();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace RakNet
