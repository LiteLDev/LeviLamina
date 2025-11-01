#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketRemb {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk810113;
    ::ll::UntypedStorage<8, 56> mUnkf04ade;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketRemb& operator=(LoggedRtcpPacketRemb const&);
    LoggedRtcpPacketRemb(LoggedRtcpPacketRemb const&);
    LoggedRtcpPacketRemb();

};

}
