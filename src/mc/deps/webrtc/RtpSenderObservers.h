#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpSenderObservers {
public:
    // prevent constructor by default
    RtpSenderObservers& operator=(RtpSenderObservers const&);
    RtpSenderObservers(RtpSenderObservers const&);
    RtpSenderObservers();
};

}; // namespace webrtc
