#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacketFixedSizeTransmissionHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk541b2b;
    ::ll::UntypedStorage<4, 4> mUnkdb008b;
    ::ll::UntypedStorage<4, 4> mUnk273818;
    ::ll::UntypedStorage<1, 1> mUnk4e245e;
    ::ll::UntypedStorage<2, 2> mUnk855cfb;
    ::ll::UntypedStorage<4, 4> mUnk29a47f;
    ::ll::UntypedStorage<4, 4> mUnke66794;
    ::ll::UntypedStorage<4, 4> mUnkfcbc2d;
    ::ll::UntypedStorage<4, 4> mUnke679ec;
    // NOLINTEND

public:
    // prevent constructor by default
    InternalPacketFixedSizeTransmissionHeader& operator=(InternalPacketFixedSizeTransmissionHeader const&);
    InternalPacketFixedSizeTransmissionHeader(InternalPacketFixedSizeTransmissionHeader const&);
    InternalPacketFixedSizeTransmissionHeader();
};

} // namespace RakNet
