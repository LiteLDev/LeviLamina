#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct PacedPacketInfo; }
// clang-format on

namespace webrtc {

struct RtpPacketSendInfo {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::RtpPacketSendInfo From(::webrtc::RtpPacketToSend const&, ::webrtc::PacedPacketInfo const&);
    // NOLINTEND
};

} // namespace webrtc
