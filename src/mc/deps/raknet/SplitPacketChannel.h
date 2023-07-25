#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SplitPacketChannel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_SPLITPACKETCHANNEL
public:
    SplitPacketChannel& operator=(SplitPacketChannel const&) = delete;
    SplitPacketChannel(SplitPacketChannel const&)            = delete;
    SplitPacketChannel()                                     = delete;
#endif

public:
};

}; // namespace RakNet
