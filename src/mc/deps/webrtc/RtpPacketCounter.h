#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacket; }
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

struct RtpPacketCounter {
public:
    // prevent constructor by default
    RtpPacketCounter& operator=(RtpPacketCounter const&);
    RtpPacketCounter(RtpPacketCounter const&);
    RtpPacketCounter();

public:
    // NOLINTBEGIN
    // symbol: ?Add@RtpPacketCounter@webrtc@@QEAAXAEBU12@@Z
    MCAPI void Add(struct webrtc::RtpPacketCounter const&);

    // symbol: ??0RtpPacketCounter@webrtc@@QEAA@AEBVRtpPacket@1@@Z
    MCAPI explicit RtpPacketCounter(class webrtc::RtpPacket const&);

    // symbol: ??0RtpPacketCounter@webrtc@@QEAA@AEBVRtpPacketToSend@1@@Z
    MCAPI explicit RtpPacketCounter(class webrtc::RtpPacketToSend const&);

    // NOLINTEND
};

}; // namespace webrtc
