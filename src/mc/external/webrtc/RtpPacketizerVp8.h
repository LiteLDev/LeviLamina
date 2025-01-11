#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RTPVideoHeaderVP8; }
// clang-format on

namespace webrtc {

class RtpPacketizerVp8 {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    RtpPacketizerVp8(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::RTPVideoHeaderVP8 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::absl::InlinedVector<uchar, 6, ::std::allocator<uchar>>
    BuildHeader(::webrtc::RTPVideoHeaderVP8 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::RTPVideoHeaderVP8 const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
