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
    InterArrivalDelta& operator=(InterArrivalDelta const&);
    InterArrivalDelta(InterArrivalDelta const&);
    InterArrivalDelta();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool BelongsToBurst(::webrtc::Timestamp, ::webrtc::Timestamp) const;

    MCAPI bool
    ComputeDeltas(::webrtc::Timestamp, ::webrtc::Timestamp, ::webrtc::Timestamp, uint64, ::webrtc::TimeDelta*, ::webrtc::TimeDelta*, int*);

    MCAPI explicit InterArrivalDelta(::webrtc::TimeDelta);

    MCAPI bool NewTimestampGroup(::webrtc::Timestamp, ::webrtc::Timestamp) const;

    MCAPI void Reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::TimeDelta);
    // NOLINTEND
};

} // namespace webrtc
