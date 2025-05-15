#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RTPVideoHeader; }
// clang-format on

namespace webrtc {

class RtpPacketizerGeneric {
public:
    // prevent constructor by default
    RtpPacketizerGeneric();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void BuildHeader(::webrtc::RTPVideoHeader const&);

    MCNAPI RtpPacketizerGeneric(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits);

    MCNAPI
    RtpPacketizerGeneric(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::RTPVideoHeader const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits);

    MCNAPI void*
    $ctor(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::RTPVideoHeader const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
