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
    virtual ~RtpPacketSinkInterface();

    virtual void OnRtpPacket(::webrtc::RtpPacketReceived const& parsed_packet) = 0;
    // NOLINTEND
};

} // namespace webrtc
