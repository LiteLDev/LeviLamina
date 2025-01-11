#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RtpVideoLayersAllocationExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 ValueSize(::webrtc::VideoLayersAllocation const&);

    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::VideoLayersAllocation const&);
    // NOLINTEND
};

} // namespace webrtc
