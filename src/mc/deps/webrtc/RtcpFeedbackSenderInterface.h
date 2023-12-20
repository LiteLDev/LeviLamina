#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpFeedbackSenderInterface {
public:
    // prevent constructor by default
    RtcpFeedbackSenderInterface& operator=(RtcpFeedbackSenderInterface const&);
    RtcpFeedbackSenderInterface(RtcpFeedbackSenderInterface const&);
    RtcpFeedbackSenderInterface();
};

}; // namespace webrtc
