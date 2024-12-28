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
    // prevent constructor by default
    TransportFeedbackDemuxer& operator=(TransportFeedbackDemuxer const&);
    TransportFeedbackDemuxer(TransportFeedbackDemuxer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddPacket(::webrtc::RtpPacketSendInfo const&);

    MCAPI void OnTransportFeedback(::webrtc::rtcp::TransportFeedback const&);

    MCAPI TransportFeedbackDemuxer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
