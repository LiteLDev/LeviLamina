#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct AbsoluteCaptureTime; }
// clang-format on

namespace webrtc {

class AbsoluteCaptureTimeExtension {
public:
    // prevent constructor by default
    AbsoluteCaptureTimeExtension& operator=(AbsoluteCaptureTimeExtension const&);
    AbsoluteCaptureTimeExtension(AbsoluteCaptureTimeExtension const&);
    AbsoluteCaptureTimeExtension();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 ValueSize(::webrtc::AbsoluteCaptureTime const&);

    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::AbsoluteCaptureTime const&);
    // NOLINTEND
};

} // namespace webrtc
