#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoSendTiming; }
// clang-format on

namespace webrtc {

class VideoTimingExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::VideoSendTiming const& timing);

    MCNAPI static bool Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ushort time_delta_ms, uchar offset);
    // NOLINTEND
};

} // namespace webrtc
