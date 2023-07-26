#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetStatistics {

public:
    // prevent constructor by default
    RakNetStatistics& operator=(RakNetStatistics const&) = delete;
    RakNetStatistics(RakNetStatistics const&)            = delete;
    RakNetStatistics()                                   = delete;
};

}; // namespace RakNet
