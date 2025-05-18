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
    // prevent constructor by default
    AlrDetector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AlrDetector(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCNAPI AlrDetector(::webrtc::AlrDetectorConfig, ::webrtc::RtcEventLog*);

    MCNAPI ::std::optional<int64> GetApplicationLimitedRegionStartTime() const;

    MCNAPI void OnBytesSent(uint64, int64);

    MCNAPI void SetEstimatedBitrate(int);

    MCNAPI ~AlrDetector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::RtcEventLog*);

    MCNAPI void* $ctor(::webrtc::AlrDetectorConfig, ::webrtc::RtcEventLog*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
