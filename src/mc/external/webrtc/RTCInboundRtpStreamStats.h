#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCInboundRtpStreamStats {
public:
    // prevent constructor by default
    RTCInboundRtpStreamStats& operator=(RTCInboundRtpStreamStats const&);
    RTCInboundRtpStreamStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCInboundRtpStreamStats(::webrtc::RTCInboundRtpStreamStats const&);

    MCNAPI RTCInboundRtpStreamStats(::std::string, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCInboundRtpStreamStats const&);

    MCNAPI void* $ctor(::std::string, ::webrtc::Timestamp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
