#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AbsoluteSendTime {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, uint time_24bits);
    // NOLINTEND
};

} // namespace webrtc
