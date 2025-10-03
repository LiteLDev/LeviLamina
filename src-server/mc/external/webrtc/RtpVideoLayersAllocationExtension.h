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
    MCNAPI static uint64 ValueSize(::webrtc::VideoLayersAllocation const& allocation);

    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::VideoLayersAllocation const& allocation);
    // NOLINTEND
};

} // namespace webrtc
