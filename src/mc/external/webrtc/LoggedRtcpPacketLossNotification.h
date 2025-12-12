#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketLossNotification {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3c45ef;
    ::ll::UntypedStorage<4, 32> mUnk6a5148;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketLossNotification& operator=(LoggedRtcpPacketLossNotification const&);
    LoggedRtcpPacketLossNotification(LoggedRtcpPacketLossNotification const&);
    LoggedRtcpPacketLossNotification();
};

} // namespace webrtc
