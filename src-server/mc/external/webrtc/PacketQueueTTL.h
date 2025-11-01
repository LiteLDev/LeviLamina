#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketQueueTTL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk303dc0;
    ::ll::UntypedStorage<8, 8> mUnkd4b07d;
    ::ll::UntypedStorage<8, 8> mUnk554d37;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketQueueTTL& operator=(PacketQueueTTL const&);
    PacketQueueTTL(PacketQueueTTL const&);
    PacketQueueTTL();
};

} // namespace webrtc
