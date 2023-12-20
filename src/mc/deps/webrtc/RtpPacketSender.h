#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpPacketSender {
public:
    // prevent constructor by default
    RtpPacketSender& operator=(RtpPacketSender const&);
    RtpPacketSender(RtpPacketSender const&);
    RtpPacketSender();
};

}; // namespace webrtc
