#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace webrtc {

class VideoFrameTrackingIdExtension {
public:
    // prevent constructor by default
    VideoFrameTrackingIdExtension& operator=(VideoFrameTrackingIdExtension const&);
    VideoFrameTrackingIdExtension(VideoFrameTrackingIdExtension const&);
    VideoFrameTrackingIdExtension();

public:
    // NOLINTBEGIN
    // symbol: ?Write@VideoFrameTrackingIdExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@G@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, ushort);

    // NOLINTEND
};

}; // namespace webrtc
