#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

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
    // NOLINTBEGIN
    // symbol: ?ValueSize@RtpGenericFrameDescriptorExtension00@webrtc@@SA_KAEBVRtpGenericFrameDescriptor@2@@Z
    MCAPI static uint64 ValueSize(class webrtc::RtpGenericFrameDescriptor const&);

    // symbol:
    // ?Write@RtpGenericFrameDescriptorExtension00@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@AEBVRtpGenericFrameDescriptor@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, class webrtc::RtpGenericFrameDescriptor const&);

    // NOLINTEND
};

}; // namespace webrtc
