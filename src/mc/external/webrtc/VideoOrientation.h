#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoRotation.h"

namespace webrtc {

class VideoOrientation {
public:
    // prevent constructor by default
    VideoOrientation& operator=(VideoOrientation const&);
    VideoOrientation(VideoOrientation const&);
    VideoOrientation();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::VideoRotation);
    // NOLINTEND
};

} // namespace webrtc
