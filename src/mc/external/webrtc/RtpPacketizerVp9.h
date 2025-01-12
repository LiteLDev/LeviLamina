#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RTPVideoHeaderVP9; }
// clang-format on

namespace webrtc {

class RtpPacketizerVp9 {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    RtpPacketizerVp9(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::RTPVideoHeaderVP9 const&);

    MCAPI bool WriteHeader(bool, bool, ::rtc::ArrayView<uchar>) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::RTPVideoHeaderVP9 const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
