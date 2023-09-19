#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacketRefCountedData {
public:
    // prevent constructor by default
    InternalPacketRefCountedData& operator=(InternalPacketRefCountedData const&);
    InternalPacketRefCountedData(InternalPacketRefCountedData const&);
    InternalPacketRefCountedData();
};

}; // namespace RakNet
