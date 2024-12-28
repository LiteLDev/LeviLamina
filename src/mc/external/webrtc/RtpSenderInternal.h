#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSenderInternal {
public:
    // prevent constructor by default
    RtpSenderInternal& operator=(RtpSenderInternal const&);
    RtpSenderInternal(RtpSenderInternal const&);
    RtpSenderInternal();
};

} // namespace webrtc
