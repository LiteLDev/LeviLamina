#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpTransportInternal {
public:
    // prevent constructor by default
    RtpTransportInternal& operator=(RtpTransportInternal const&);
    RtpTransportInternal(RtpTransportInternal const&);
    RtpTransportInternal();
};

} // namespace webrtc
