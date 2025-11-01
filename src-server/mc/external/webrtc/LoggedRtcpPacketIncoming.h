#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketIncoming {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk18bff7;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketIncoming& operator=(LoggedRtcpPacketIncoming const&);
    LoggedRtcpPacketIncoming(LoggedRtcpPacketIncoming const&);
    LoggedRtcpPacketIncoming();

};

}
