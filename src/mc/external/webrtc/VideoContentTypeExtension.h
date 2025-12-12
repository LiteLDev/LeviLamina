#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoContentType.h"

namespace webrtc {

class VideoContentTypeExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::VideoContentType content_type);
    // NOLINTEND
};

} // namespace webrtc
