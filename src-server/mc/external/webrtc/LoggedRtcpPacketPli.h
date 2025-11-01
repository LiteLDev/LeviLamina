#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketPli {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk594632;
    ::ll::UntypedStorage<4, 24> mUnked9ce4;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketPli& operator=(LoggedRtcpPacketPli const&);
    LoggedRtcpPacketPli(LoggedRtcpPacketPli const&);
    LoggedRtcpPacketPli();

};

}
