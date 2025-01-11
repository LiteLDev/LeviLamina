#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoFrameTrackingIdExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, ushort);
    // NOLINTEND
};

} // namespace webrtc
