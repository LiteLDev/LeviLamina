#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7995ec;
    ::ll::UntypedStorage<8, 24> mUnk474756;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacket& operator=(LoggedRtcpPacket const&);
    LoggedRtcpPacket(LoggedRtcpPacket const&);
    LoggedRtcpPacket();

};

}
