#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtpPacketIncoming {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 424> mUnk5ff8dc;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtpPacketIncoming& operator=(LoggedRtpPacketIncoming const&);
    LoggedRtpPacketIncoming(LoggedRtpPacketIncoming const&);
    LoggedRtpPacketIncoming();
};

} // namespace webrtc
