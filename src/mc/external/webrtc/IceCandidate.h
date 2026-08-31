#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
// clang-format on

namespace webrtc {

class IceCandidate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk4f357d;
    ::ll::UntypedStorage<4, 4>   mUnk74face;
    ::ll::UntypedStorage<8, 528> mUnk74961b;
    // NOLINTEND

public:
    // prevent constructor by default
    IceCandidate& operator=(IceCandidate const&);
    IceCandidate(IceCandidate const&);
    IceCandidate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceCandidate(::std::string_view sdp_mid, int sdp_mline_index, ::webrtc::Candidate const& candidate);

    MCNAPI ::std::string ToString() const;

    MCNAPI ~IceCandidate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view sdp_mid, int sdp_mline_index, ::webrtc::Candidate const& candidate);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
