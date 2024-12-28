#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtcpPacketTypeCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd251ff;
    ::ll::UntypedStorage<4, 4> mUnka9bb6f;
    ::ll::UntypedStorage<4, 4> mUnkb779ff;
    ::ll::UntypedStorage<4, 4> mUnk594592;
    ::ll::UntypedStorage<4, 4> mUnk758c85;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcpPacketTypeCounter& operator=(RtcpPacketTypeCounter const&);
    RtcpPacketTypeCounter(RtcpPacketTypeCounter const&);
    RtcpPacketTypeCounter();
};

} // namespace webrtc
