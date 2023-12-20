#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCQualityLimitationReason {
public:
    // prevent constructor by default
    RTCQualityLimitationReason& operator=(RTCQualityLimitationReason const&);
    RTCQualityLimitationReason(RTCQualityLimitationReason const&);
    RTCQualityLimitationReason();

public:
    // NOLINTBEGIN
    // symbol: ?kBandwidth@RTCQualityLimitationReason@webrtc@@2QEBDEB
    MCAPI static char const* const kBandwidth;

    // symbol: ?kCpu@RTCQualityLimitationReason@webrtc@@2QEBDEB
    MCAPI static char const* const kCpu;

    // symbol: ?kNone@RTCQualityLimitationReason@webrtc@@2QEBDEB
    MCAPI static char const* const kNone;

    // symbol: ?kOther@RTCQualityLimitationReason@webrtc@@2QEBDEB
    MCAPI static char const* const kOther;

    // NOLINTEND
};

}; // namespace webrtc
