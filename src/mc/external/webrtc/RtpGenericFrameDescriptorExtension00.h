#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpGenericFrameDescriptor; }
// clang-format on

namespace webrtc {

class RtpGenericFrameDescriptorExtension00 {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 ValueSize(::webrtc::RtpGenericFrameDescriptor const&);

    MCNAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::RtpGenericFrameDescriptor const&);
    // NOLINTEND
};

} // namespace webrtc
