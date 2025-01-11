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
    // member functions
    // NOLINTBEGIN
    MCAPI void EraseOldClusters(::webrtc::Timestamp);

    MCAPI ::std::optional<::webrtc::DataRate> FetchAndResetLastEstimatedBitrate();

    MCAPI ::std::optional<::webrtc::DataRate> HandleProbeAndEstimateBitrate(::webrtc::PacketResult const&);

    MCAPI explicit ProbeBitrateEstimator(::webrtc::RtcEventLog*);

    MCAPI ~ProbeBitrateEstimator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
