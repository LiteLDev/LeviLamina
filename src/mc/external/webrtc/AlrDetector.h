#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { struct AlrDetectorConfig; }
// clang-format on

namespace webrtc {

class AlrDetector {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI AlrDetector(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCAPI AlrDetector(::webrtc::AlrDetectorConfig, ::webrtc::RtcEventLog*);

    MCAPI ::std::optional<int64> GetApplicationLimitedRegionStartTime() const;

    MCAPI void OnBytesSent(uint64, int64);

    MCAPI void SetEstimatedBitrate(int);

    MCAPI ~AlrDetector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCAPI void* $ctor(::webrtc::AlrDetectorConfig, ::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
