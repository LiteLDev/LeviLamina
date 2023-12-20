#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCStatsIceCandidatePairState {
public:
    // prevent constructor by default
    RTCStatsIceCandidatePairState& operator=(RTCStatsIceCandidatePairState const&);
    RTCStatsIceCandidatePairState(RTCStatsIceCandidatePairState const&);
    RTCStatsIceCandidatePairState();

public:
    // NOLINTBEGIN
    // symbol: ?kFailed@RTCStatsIceCandidatePairState@webrtc@@2QEBDEB
    MCAPI static char const* const kFailed;

    // symbol: ?kFrozen@RTCStatsIceCandidatePairState@webrtc@@2QEBDEB
    MCAPI static char const* const kFrozen;

    // symbol: ?kInProgress@RTCStatsIceCandidatePairState@webrtc@@2QEBDEB
    MCAPI static char const* const kInProgress;

    // symbol: ?kSucceeded@RTCStatsIceCandidatePairState@webrtc@@2QEBDEB
    MCAPI static char const* const kSucceeded;

    // symbol: ?kWaiting@RTCStatsIceCandidatePairState@webrtc@@2QEBDEB
    MCAPI static char const* const kWaiting;

    // NOLINTEND
};

}; // namespace webrtc
