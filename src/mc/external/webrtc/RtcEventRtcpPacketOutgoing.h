#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventRtcpPacketOutgoing {
public:
    // prevent constructor by default
    RtcEventRtcpPacketOutgoing();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RtcEventRtcpPacketOutgoing(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
