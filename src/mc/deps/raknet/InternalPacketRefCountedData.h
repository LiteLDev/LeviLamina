#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacketRefCountedData {

public:
    // prevent constructor by default
    InternalPacketRefCountedData& operator=(InternalPacketRefCountedData const&) = delete;
    InternalPacketRefCountedData(InternalPacketRefCountedData const&)            = delete;
    InternalPacketRefCountedData()                                               = delete;
};

}; // namespace RakNet
