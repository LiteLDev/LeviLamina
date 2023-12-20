#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpTransportConfig {
public:
    // prevent constructor by default
    RtpTransportConfig& operator=(RtpTransportConfig const&);
    RtpTransportConfig(RtpTransportConfig const&);
    RtpTransportConfig();
};

}; // namespace webrtc
