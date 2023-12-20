#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StreamFeedbackObserver {
public:
    // StreamFeedbackObserver inner types declare
    // clang-format off
    struct StreamPacketInfo;
    // clang-format on

    // StreamFeedbackObserver inner types define
    struct StreamPacketInfo {
    public:
        // prevent constructor by default
        StreamPacketInfo& operator=(StreamPacketInfo const&);
        StreamPacketInfo(StreamPacketInfo const&);
        StreamPacketInfo();
    };

public:
    // prevent constructor by default
    StreamFeedbackObserver& operator=(StreamFeedbackObserver const&);
    StreamFeedbackObserver(StreamFeedbackObserver const&);
    StreamFeedbackObserver();
};

}; // namespace webrtc
