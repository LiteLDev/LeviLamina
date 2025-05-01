#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct AbsoluteCaptureTime; }
// clang-format on

namespace webrtc {

class AbsoluteCaptureTimeExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 ValueSize(::webrtc::AbsoluteCaptureTime const&);

    MCNAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::AbsoluteCaptureTime const&);
    // NOLINTEND
};

} // namespace webrtc
