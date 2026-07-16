#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/VideoRotation.h"

namespace webrtc {

class VideoOrientation {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::VideoRotation rotation);
    // NOLINTEND
};

} // namespace webrtc
