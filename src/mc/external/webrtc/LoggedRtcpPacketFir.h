#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRtcpPacketFir {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb01af3;
    ::ll::UntypedStorage<8, 48> mUnk7a54a4;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRtcpPacketFir& operator=(LoggedRtcpPacketFir const&);
    LoggedRtcpPacketFir(LoggedRtcpPacketFir const&);
    LoggedRtcpPacketFir();
};

} // namespace webrtc
