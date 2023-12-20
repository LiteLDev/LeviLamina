#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpHeaderExtensionMap; }
// clang-format on

namespace webrtc {

class RtpPacketToSend {
public:
    // prevent constructor by default
    RtpPacketToSend();

public:
    // NOLINTBEGIN
    // symbol: ??0RtpPacketToSend@webrtc@@QEAA@PEBVRtpHeaderExtensionMap@1@@Z
    MCAPI explicit RtpPacketToSend(class webrtc::RtpHeaderExtensionMap const*);

    // symbol: ??0RtpPacketToSend@webrtc@@QEAA@AEBV01@@Z
    MCAPI RtpPacketToSend(class webrtc::RtpPacketToSend const&);

    // symbol: ??0RtpPacketToSend@webrtc@@QEAA@PEBVRtpHeaderExtensionMap@1@_K@Z
    MCAPI RtpPacketToSend(class webrtc::RtpHeaderExtensionMap const*, uint64);

    // symbol: ??4RtpPacketToSend@webrtc@@QEAAAEAV01@AEBV01@@Z
    MCAPI class webrtc::RtpPacketToSend& operator=(class webrtc::RtpPacketToSend const&);

    // symbol: ??1RtpPacketToSend@webrtc@@QEAA@XZ
    MCAPI ~RtpPacketToSend();

    // NOLINTEND
};

}; // namespace webrtc
