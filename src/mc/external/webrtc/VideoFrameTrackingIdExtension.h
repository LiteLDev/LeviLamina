#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoFrameTrackingIdExtension {
public:
    // prevent constructor by default
    VideoFrameTrackingIdExtension& operator=(VideoFrameTrackingIdExtension const&);
    VideoFrameTrackingIdExtension(VideoFrameTrackingIdExtension const&);
    VideoFrameTrackingIdExtension();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, ushort);
    // NOLINTEND
};

} // namespace webrtc
