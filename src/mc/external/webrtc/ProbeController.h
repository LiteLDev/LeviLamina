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
    // prevent constructor by default
    ProbeController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EnablePeriodicAlrProbing(bool);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> InitiateExponentialProbing(::webrtc::Timestamp);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig>
    InitiateProbing(::webrtc::Timestamp, ::std::vector<::webrtc::DataRate>, bool);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig>
        OnMaxTotalAllocatedBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> OnNetworkAvailability(::webrtc::NetworkAvailability);

    MCNAPI ProbeController(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> Process(::webrtc::Timestamp);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> RequestProbe(::webrtc::Timestamp);

    MCNAPI void Reset(::webrtc::Timestamp);

    MCNAPI void SetAlrEndedTimeMs(int64);

    MCNAPI void SetAlrStartTimeMs(::std::optional<int64>);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig>
        SetBitrates(::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig>
        SetEstimatedBitrate(::webrtc::DataRate, ::webrtc::BandwidthLimitedCause, ::webrtc::Timestamp);

    MCNAPI void SetNetworkStateEstimate(::webrtc::NetworkStateEstimate);

    MCNAPI bool TimeForAlrProbe(::webrtc::Timestamp) const;

    MCNAPI bool TimeForNetworkStateProbe(::webrtc::Timestamp) const;

    MCNAPI ~ProbeController();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
