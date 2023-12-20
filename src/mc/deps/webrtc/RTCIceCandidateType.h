#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCIceCandidateType {
public:
    // prevent constructor by default
    RTCIceCandidateType& operator=(RTCIceCandidateType const&);
    RTCIceCandidateType(RTCIceCandidateType const&);
    RTCIceCandidateType();

public:
    // NOLINTBEGIN
    // symbol: ?kHost@RTCIceCandidateType@webrtc@@2QEBDEB
    MCAPI static char const* const kHost;

    // symbol: ?kPrflx@RTCIceCandidateType@webrtc@@2QEBDEB
    MCAPI static char const* const kPrflx;

    // symbol: ?kRelay@RTCIceCandidateType@webrtc@@2QEBDEB
    MCAPI static char const* const kRelay;

    // symbol: ?kSrflx@RTCIceCandidateType@webrtc@@2QEBDEB
    MCAPI static char const* const kSrflx;

    // NOLINTEND
};

}; // namespace webrtc
