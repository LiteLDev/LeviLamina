#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoRotation.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class VideoOrientation {
public:
    // prevent constructor by default
    VideoOrientation& operator=(VideoOrientation const&);
    VideoOrientation(VideoOrientation const&);
    VideoOrientation();

public:
    // NOLINTBEGIN
    // symbol: ?Write@VideoOrientation@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@W4VideoRotation@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, ::webrtc::VideoRotation);

    // NOLINTEND
};

}; // namespace webrtc
