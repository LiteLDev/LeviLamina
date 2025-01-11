#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventRtcpPacketOutgoing {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RtcEventRtcpPacketOutgoing(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
