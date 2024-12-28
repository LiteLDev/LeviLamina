#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpPayloadState {
public:
    // prevent constructor by default
    RtpPayloadState& operator=(RtpPayloadState const&);
    RtpPayloadState(RtpPayloadState const&);
    RtpPayloadState();
};

} // namespace webrtc
