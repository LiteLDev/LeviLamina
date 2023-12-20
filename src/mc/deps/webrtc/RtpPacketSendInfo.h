#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpPacketSendInfo {
public:
    // prevent constructor by default
    RtpPacketSendInfo& operator=(RtpPacketSendInfo const&);
    RtpPacketSendInfo(RtpPacketSendInfo const&);
    RtpPacketSendInfo();
};

}; // namespace webrtc
