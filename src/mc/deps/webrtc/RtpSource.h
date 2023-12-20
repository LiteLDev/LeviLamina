#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSource {
public:
    // prevent constructor by default
    RtpSource& operator=(RtpSource const&);
    RtpSource(RtpSource const&);
    RtpSource();
};

}; // namespace webrtc
