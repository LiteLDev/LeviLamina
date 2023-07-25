#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetStatistics {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RAKNETSTATISTICS
public:
    RakNetStatistics& operator=(RakNetStatistics const&) = delete;
    RakNetStatistics(RakNetStatistics const&)            = delete;
    RakNetStatistics()                                   = delete;
#endif

public:
};

}; // namespace RakNet
