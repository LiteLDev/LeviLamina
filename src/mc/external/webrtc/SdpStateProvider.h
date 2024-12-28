#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class SdpStateProvider {
public:
    // prevent constructor by default
    SdpStateProvider& operator=(SdpStateProvider const&);
    SdpStateProvider(SdpStateProvider const&);
    SdpStateProvider();
};

} // namespace webrtc
