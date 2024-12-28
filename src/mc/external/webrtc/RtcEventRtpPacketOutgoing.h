#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtcEventRtpPacketOutgoing {
public:
    // prevent constructor by default
    RtcEventRtpPacketOutgoing& operator=(RtcEventRtpPacketOutgoing const&);
    RtcEventRtpPacketOutgoing(RtcEventRtpPacketOutgoing const&);
    RtcEventRtpPacketOutgoing();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcEventRtpPacketOutgoing(::webrtc::RtpPacketToSend const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpPacketToSend const&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
