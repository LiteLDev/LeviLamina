#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpPacketSinkInterface {
public:
    // prevent constructor by default
    RtpPacketSinkInterface& operator=(RtpPacketSinkInterface const&);
    RtpPacketSinkInterface(RtpPacketSinkInterface const&);
    RtpPacketSinkInterface();
};

}; // namespace webrtc
