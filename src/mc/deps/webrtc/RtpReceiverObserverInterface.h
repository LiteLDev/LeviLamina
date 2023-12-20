#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpReceiverObserverInterface {
public:
    // prevent constructor by default
    RtpReceiverObserverInterface& operator=(RtpReceiverObserverInterface const&);
    RtpReceiverObserverInterface(RtpReceiverObserverInterface const&);
    RtpReceiverObserverInterface();
};

}; // namespace webrtc
