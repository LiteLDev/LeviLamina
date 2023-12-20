#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpExtensionSize {
public:
    // prevent constructor by default
    RtpExtensionSize& operator=(RtpExtensionSize const&);
    RtpExtensionSize(RtpExtensionSize const&);
    RtpExtensionSize();
};

}; // namespace webrtc
