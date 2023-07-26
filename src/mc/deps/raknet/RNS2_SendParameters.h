#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RNS2_SendParameters {

public:
    // prevent constructor by default
    RNS2_SendParameters& operator=(RNS2_SendParameters const&) = delete;
    RNS2_SendParameters(RNS2_SendParameters const&)            = delete;
    RNS2_SendParameters()                                      = delete;
};

}; // namespace RakNet
