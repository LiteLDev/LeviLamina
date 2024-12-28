#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketQueueTTL {
public:
    // prevent constructor by default
    PacketQueueTTL& operator=(PacketQueueTTL const&);
    PacketQueueTTL(PacketQueueTTL const&);
    PacketQueueTTL();
};

} // namespace webrtc
