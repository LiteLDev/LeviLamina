#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

struct TransportFeedback {
public:
    // TransportFeedback inner types declare
    // clang-format off
    struct LastChunk;
    struct ReceivedPacket;
    // clang-format on

    // TransportFeedback inner types define
    struct LastChunk {};

    struct ReceivedPacket {};
};

} // namespace webrtc::rtcp
