#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpVideoSenderInterface {
public:
    // prevent constructor by default
    RtpVideoSenderInterface& operator=(RtpVideoSenderInterface const&);
    RtpVideoSenderInterface(RtpVideoSenderInterface const&);
    RtpVideoSenderInterface();
};

} // namespace webrtc
