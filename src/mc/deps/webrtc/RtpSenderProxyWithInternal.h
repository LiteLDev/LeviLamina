#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class RtpSenderProxyWithInternal {
public:
    // prevent constructor by default
    RtpSenderProxyWithInternal& operator=(RtpSenderProxyWithInternal const&);
    RtpSenderProxyWithInternal(RtpSenderProxyWithInternal const&);
    RtpSenderProxyWithInternal();
};

}; // namespace webrtc
