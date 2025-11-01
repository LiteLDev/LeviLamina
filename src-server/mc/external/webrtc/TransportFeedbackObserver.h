#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpPacketSendInfo; }
// clang-format on

namespace webrtc {

class TransportFeedbackObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransportFeedbackObserver() = default;

    // vIndex: 1
    virtual void OnAddPacket(::webrtc::RtpPacketSendInfo const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
