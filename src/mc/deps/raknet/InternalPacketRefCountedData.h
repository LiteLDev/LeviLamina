#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacketRefCountedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*> sharedDataBlock;
    ::ll::TypedStorage<4, 4, uint>   refCount;
    // NOLINTEND
};

} // namespace RakNet
