#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpHeaderExtensionMap; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RtpPacketReceived {
public:
    // prevent constructor by default
    RtpPacketReceived& operator=(RtpPacketReceived const&);
    RtpPacketReceived(RtpPacketReceived const&);
    RtpPacketReceived();

public:
    // NOLINTBEGIN
    // symbol: ??0RtpPacketReceived@webrtc@@QEAA@PEBVRtpHeaderExtensionMap@1@VTimestamp@1@@Z
    MCAPI RtpPacketReceived(class webrtc::RtpHeaderExtensionMap const*, class webrtc::Timestamp);

    // symbol: ??1RtpPacketReceived@webrtc@@QEAA@XZ
    MCAPI ~RtpPacketReceived();

    // NOLINTEND
};

}; // namespace webrtc
