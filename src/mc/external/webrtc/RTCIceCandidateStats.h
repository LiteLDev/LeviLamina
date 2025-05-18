#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCIceCandidateStats {
public:
    // prevent constructor by default
    RTCIceCandidateStats& operator=(RTCIceCandidateStats const&);
    RTCIceCandidateStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCIceCandidateStats(::webrtc::RTCIceCandidateStats const&);

    MCNAPI RTCIceCandidateStats(::std::string, ::webrtc::Timestamp, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCIceCandidateStats const&);

    MCNAPI void* $ctor(::std::string, ::webrtc::Timestamp, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
