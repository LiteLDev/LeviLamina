#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SocketLayerOverride {
public:
    // prevent constructor by default
    SocketLayerOverride& operator=(SocketLayerOverride const&);
    SocketLayerOverride(SocketLayerOverride const&);
    SocketLayerOverride();
};

}; // namespace RakNet
