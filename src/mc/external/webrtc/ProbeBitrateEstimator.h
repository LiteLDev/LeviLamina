#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class ProbeBitrateEstimator {
public:
    // ProbeBitrateEstimator inner types declare
    // clang-format off
    struct AggregatedCluster;
    // clang-format on

    // ProbeBitrateEstimator inner types define
    struct AggregatedCluster {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EraseOldClusters(::webrtc::Timestamp);

    MCNAPI ::std::optional<::webrtc::DataRate> FetchAndResetLastEstimatedBitrate();

    MCNAPI ::std::optional<::webrtc::DataRate> HandleProbeAndEstimateBitrate(::webrtc::PacketResult const&);

    MCNAPI explicit ProbeBitrateEstimator(::webrtc::RtcEventLog*);

    MCNAPI ~ProbeBitrateEstimator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
