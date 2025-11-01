#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketNack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4b0aff;
    ::ll::UntypedStorage<8, 72> mUnk729d93;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketNack& operator=(LoggedRtcpPacketNack const&);
    LoggedRtcpPacketNack(LoggedRtcpPacketNack const&);
    LoggedRtcpPacketNack();
};

} // namespace webrtc
