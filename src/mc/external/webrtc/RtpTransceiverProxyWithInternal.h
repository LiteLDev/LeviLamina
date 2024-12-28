#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class RtpTransceiverProxyWithInternal {
public:
    // prevent constructor by default
    RtpTransceiverProxyWithInternal& operator=(RtpTransceiverProxyWithInternal const&);
    RtpTransceiverProxyWithInternal(RtpTransceiverProxyWithInternal const&);
    RtpTransceiverProxyWithInternal();
};

} // namespace webrtc
