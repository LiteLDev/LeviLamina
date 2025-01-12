#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthLimitedCause.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct NetworkAvailability; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class ProbeController {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void EnablePeriodicAlrProbing(bool);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig> InitiateExponentialProbing(::webrtc::Timestamp);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig>
    InitiateProbing(::webrtc::Timestamp, ::std::vector<::webrtc::DataRate>, bool);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig>
        OnMaxTotalAllocatedBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig> OnNetworkAvailability(::webrtc::NetworkAvailability);

    MCAPI ProbeController(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig> Process(::webrtc::Timestamp);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig> RequestProbe(::webrtc::Timestamp);

    MCAPI void Reset(::webrtc::Timestamp);

    MCAPI void SetAlrEndedTimeMs(int64);

    MCAPI void SetAlrStartTimeMs(::std::optional<int64>);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig>
        SetBitrates(::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig>
        SetEstimatedBitrate(::webrtc::DataRate, ::webrtc::BandwidthLimitedCause, ::webrtc::Timestamp);

    MCAPI void SetNetworkStateEstimate(::webrtc::NetworkStateEstimate);

    MCAPI bool TimeForAlrProbe(::webrtc::Timestamp) const;

    MCAPI bool TimeForNetworkStateProbe(::webrtc::Timestamp) const;

    MCAPI ~ProbeController();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
