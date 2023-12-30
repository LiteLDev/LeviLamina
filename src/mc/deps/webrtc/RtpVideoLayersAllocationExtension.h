#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RtpVideoLayersAllocationExtension {
public:
    // prevent constructor by default
    RtpVideoLayersAllocationExtension& operator=(RtpVideoLayersAllocationExtension const&);
    RtpVideoLayersAllocationExtension(RtpVideoLayersAllocationExtension const&);
    RtpVideoLayersAllocationExtension();

public:
    // NOLINTBEGIN
    // symbol: ?ValueSize@RtpVideoLayersAllocationExtension@webrtc@@SA_KAEBUVideoLayersAllocation@2@@Z
    MCAPI static uint64 ValueSize(struct webrtc::VideoLayersAllocation const&);

    // symbol:
    // ?Write@RtpVideoLayersAllocationExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@AEBUVideoLayersAllocation@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, struct webrtc::VideoLayersAllocation const&);

    // NOLINTEND
};

}; // namespace webrtc
