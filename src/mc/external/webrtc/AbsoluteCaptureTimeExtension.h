#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct AbsoluteCaptureTime; }
// clang-format on

namespace webrtc {

class AbsoluteCaptureTimeExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 ValueSize(::webrtc::AbsoluteCaptureTime const& extension);

    MCNAPI static bool
    Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::AbsoluteCaptureTime const& extension);
    // NOLINTEND
};

} // namespace webrtc
