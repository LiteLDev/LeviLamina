#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ReceivedPacket {
public:
    // prevent constructor by default
    ReceivedPacket& operator=(ReceivedPacket const&);
    ReceivedPacket(ReceivedPacket const&);
    ReceivedPacket();
};

}; // namespace webrtc
