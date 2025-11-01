#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoRotation.h"

namespace webrtc {

class VideoOrientation {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::VideoRotation rotation);
    // NOLINTEND
};

} // namespace webrtc
