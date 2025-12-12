#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtpPacketOutgoing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 424> mUnk5a9196;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtpPacketOutgoing& operator=(LoggedRtpPacketOutgoing const&);
    LoggedRtpPacketOutgoing(LoggedRtpPacketOutgoing const&);
    LoggedRtpPacketOutgoing();
};

} // namespace webrtc
