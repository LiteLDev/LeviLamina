#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCIceCandidateStats {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI RTCIceCandidateStats(::webrtc::RTCIceCandidateStats const&);

    MCAPI RTCIceCandidateStats(::std::string, ::webrtc::Timestamp, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RTCIceCandidateStats const&);

    MCAPI void* $ctor(::std::string, ::webrtc::Timestamp, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
