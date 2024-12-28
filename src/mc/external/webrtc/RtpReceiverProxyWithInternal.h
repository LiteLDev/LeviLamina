#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class RtpReceiverProxyWithInternal {
public:
    // prevent constructor by default
    RtpReceiverProxyWithInternal& operator=(RtpReceiverProxyWithInternal const&);
    RtpReceiverProxyWithInternal(RtpReceiverProxyWithInternal const&);
    RtpReceiverProxyWithInternal();
};

} // namespace webrtc
