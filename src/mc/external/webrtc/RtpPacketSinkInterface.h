#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketReceived; }
// clang-format on

namespace webrtc {

class RtpPacketSinkInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpPacketSinkInterface() = default;

    // vIndex: 1
    virtual void OnRtpPacket(::webrtc::RtpPacketReceived const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
