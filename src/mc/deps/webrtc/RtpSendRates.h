#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSendRates {
public:
    // prevent constructor by default
    RtpSendRates& operator=(RtpSendRates const&);
    RtpSendRates(RtpSendRates const&);
    RtpSendRates();
};

}; // namespace webrtc
