#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpGenericFrameDescriptor; }
// clang-format on

namespace webrtc {

class RtpGenericFrameDescriptorExtension00 {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 ValueSize(::webrtc::RtpGenericFrameDescriptor const& descriptor);

    MCNAPI static bool
    Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::RtpGenericFrameDescriptor const& descriptor);
    // NOLINTEND
};

} // namespace webrtc
