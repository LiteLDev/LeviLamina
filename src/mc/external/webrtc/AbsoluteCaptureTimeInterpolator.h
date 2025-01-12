#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AbsoluteCaptureTimeInterpolator {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint GetSource(uint, ::rtc::ArrayView<uint const>);

    MCAPI static uint64 InterpolateAbsoluteCaptureTimestamp(uint, int, uint, uint64);
    // NOLINTEND
};

} // namespace webrtc
