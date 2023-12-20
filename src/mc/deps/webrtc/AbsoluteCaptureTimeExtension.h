#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

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
    // NOLINTBEGIN
    // symbol: ?ValueSize@AbsoluteCaptureTimeExtension@webrtc@@SA_KAEBUAbsoluteCaptureTime@2@@Z
    MCAPI static uint64 ValueSize(struct webrtc::AbsoluteCaptureTime const&);

    // symbol: ?Write@AbsoluteCaptureTimeExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@AEBUAbsoluteCaptureTime@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, struct webrtc::AbsoluteCaptureTime const&);

    // NOLINTEND
};

}; // namespace webrtc
