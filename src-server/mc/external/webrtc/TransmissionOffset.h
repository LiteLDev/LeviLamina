#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransmissionOffset {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, int rtp_time);
    // NOLINTEND
};

} // namespace webrtc
