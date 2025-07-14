#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketTransportFeedback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk8d0edc;
    ::ll::UntypedStorage<8, 160> mUnk4647ac;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketTransportFeedback& operator=(LoggedRtcpPacketTransportFeedback const&);
    LoggedRtcpPacketTransportFeedback(LoggedRtcpPacketTransportFeedback const&);
    LoggedRtcpPacketTransportFeedback();
};

} // namespace webrtc
