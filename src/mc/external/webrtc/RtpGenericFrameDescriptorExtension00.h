#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpGenericFrameDescriptor; }
// clang-format on

namespace webrtc {

class RtpGenericFrameDescriptorExtension00 {
public:
    // prevent constructor by default
    RtpGenericFrameDescriptorExtension00& operator=(RtpGenericFrameDescriptorExtension00 const&);
    RtpGenericFrameDescriptorExtension00(RtpGenericFrameDescriptorExtension00 const&);
    RtpGenericFrameDescriptorExtension00();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 ValueSize(::webrtc::RtpGenericFrameDescriptor const&);

    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::RtpGenericFrameDescriptor const&);
    // NOLINTEND
};

} // namespace webrtc
