#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakPeerConfiguration {
public:
    // prevent constructor by default
    RakPeerConfiguration& operator=(RakPeerConfiguration const&);
    RakPeerConfiguration(RakPeerConfiguration const&);
    RakPeerConfiguration();
};

}; // namespace RakNet
