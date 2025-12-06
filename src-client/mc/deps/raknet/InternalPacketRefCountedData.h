#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacketRefCountedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk526be6;
    ::ll::UntypedStorage<4, 4> mUnk6e07de;
    // NOLINTEND

public:
    // prevent constructor by default
    InternalPacketRefCountedData& operator=(InternalPacketRefCountedData const&);
    InternalPacketRefCountedData(InternalPacketRefCountedData const&);
    InternalPacketRefCountedData();
};

} // namespace RakNet
