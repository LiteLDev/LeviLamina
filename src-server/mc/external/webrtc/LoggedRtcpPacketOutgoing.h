#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketOutgoing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk641a12;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketOutgoing& operator=(LoggedRtcpPacketOutgoing const&);
    LoggedRtcpPacketOutgoing(LoggedRtcpPacketOutgoing const&);
    LoggedRtcpPacketOutgoing();
};

} // namespace webrtc
