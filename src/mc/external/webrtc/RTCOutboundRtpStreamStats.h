#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCOutboundRtpStreamStats {
public:
    // prevent constructor by default
    RTCOutboundRtpStreamStats& operator=(RTCOutboundRtpStreamStats const&);
    RTCOutboundRtpStreamStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCOutboundRtpStreamStats(::webrtc::RTCOutboundRtpStreamStats const&);

    MCNAPI RTCOutboundRtpStreamStats(::std::string, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCOutboundRtpStreamStats const&);

    MCNAPI void* $ctor(::std::string, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
