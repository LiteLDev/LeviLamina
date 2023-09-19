#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RNS2_BerkleyBindParameters {
public:
    // prevent constructor by default
    RNS2_BerkleyBindParameters& operator=(RNS2_BerkleyBindParameters const&);
    RNS2_BerkleyBindParameters(RNS2_BerkleyBindParameters const&);
    RNS2_BerkleyBindParameters();
};

}; // namespace RakNet
