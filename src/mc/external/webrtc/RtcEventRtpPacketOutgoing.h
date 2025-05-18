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
    RtcEventRtpPacketOutgoing();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventRtpPacketOutgoing(::webrtc::RtpPacketToSend const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpPacketToSend const&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
