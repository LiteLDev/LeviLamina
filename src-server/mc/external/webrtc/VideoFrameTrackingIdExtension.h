#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoFrameTrackingIdExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ushort video_frame_tracking_id);
    // NOLINTEND

};

}
