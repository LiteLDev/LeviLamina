#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpState {
public:
    // prevent constructor by default
    RtpState& operator=(RtpState const&);
    RtpState(RtpState const&);
    RtpState();
};

}; // namespace webrtc
