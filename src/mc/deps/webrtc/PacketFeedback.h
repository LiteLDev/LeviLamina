#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketFeedback {
public:
    // prevent constructor by default
    PacketFeedback& operator=(PacketFeedback const&);
    PacketFeedback(PacketFeedback const&);
    PacketFeedback();
};

}; // namespace webrtc
