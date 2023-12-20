#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SentPacket {
public:
    // prevent constructor by default
    SentPacket& operator=(SentPacket const&);
    SentPacket(SentPacket const&);
    SentPacket();
};

}; // namespace webrtc
