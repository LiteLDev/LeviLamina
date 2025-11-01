#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketBye {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk223cb8;
    ::ll::UntypedStorage<8, 72> mUnk82ad7f;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketBye& operator=(LoggedRtcpPacketBye const&);
    LoggedRtcpPacketBye(LoggedRtcpPacketBye const&);
    LoggedRtcpPacketBye();

};

}
