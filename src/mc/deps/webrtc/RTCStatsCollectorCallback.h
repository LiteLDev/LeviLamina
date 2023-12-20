#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCStatsCollectorCallback {
public:
    // prevent constructor by default
    RTCStatsCollectorCallback& operator=(RTCStatsCollectorCallback const&);
    RTCStatsCollectorCallback(RTCStatsCollectorCallback const&);
    RTCStatsCollectorCallback();
};

}; // namespace webrtc
