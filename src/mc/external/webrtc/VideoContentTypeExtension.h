#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoContentType.h"

namespace webrtc {

class VideoContentTypeExtension {
public:
    // prevent constructor by default
    VideoContentTypeExtension& operator=(VideoContentTypeExtension const&);
    VideoContentTypeExtension(VideoContentTypeExtension const&);
    VideoContentTypeExtension();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::VideoContentType);
    // NOLINTEND
};

} // namespace webrtc
