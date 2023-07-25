#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacketRefCountedData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_INTERNALPACKETREFCOUNTEDDATA
public:
    InternalPacketRefCountedData& operator=(InternalPacketRefCountedData const&) = delete;
    InternalPacketRefCountedData(InternalPacketRefCountedData const&)            = delete;
    InternalPacketRefCountedData()                                               = delete;
#endif

public:
};

}; // namespace RakNet
