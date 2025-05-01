#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpPacketSendInfo; }
namespace webrtc::rtcp { class TransportFeedback; }
// clang-format on

namespace webrtc {

class TransportFeedbackDemuxer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddPacket(::webrtc::RtpPacketSendInfo const&);

    MCNAPI void OnTransportFeedback(::webrtc::rtcp::TransportFeedback const&);

    MCNAPI TransportFeedbackDemuxer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
