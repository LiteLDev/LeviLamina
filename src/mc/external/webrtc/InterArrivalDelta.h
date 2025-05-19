#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class InterArrivalDelta {
public:
    // prevent constructor by default
    InterArrivalDelta();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool BelongsToBurst(::webrtc::Timestamp, ::webrtc::Timestamp) const;

    MCNAPI bool ComputeDeltas(
        ::webrtc::Timestamp,
        ::webrtc::Timestamp,
        ::webrtc::Timestamp,
        uint64,
        ::webrtc::TimeDelta*,
        ::webrtc::TimeDelta*,
        int*
    );

    MCNAPI explicit InterArrivalDelta(::webrtc::TimeDelta);

    MCNAPI bool NewTimestampGroup(::webrtc::Timestamp, ::webrtc::Timestamp) const;

    MCNAPI void Reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TimeDelta);
    // NOLINTEND
};

} // namespace webrtc
