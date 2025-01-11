#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransmissionOffset {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, int);
    // NOLINTEND
};

} // namespace webrtc
