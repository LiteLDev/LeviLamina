#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/VideoContentType.h"

namespace webrtc {

class VideoContentTypeExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::VideoContentType content_type);
    // NOLINTEND
};

} // namespace webrtc
