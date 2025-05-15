#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace webrtc { struct SdpParseError; }
// clang-format on

namespace webrtc {

class JsepIceCandidate {
public:
    // prevent constructor by default
    JsepIceCandidate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Initialize(::std::string const&, ::webrtc::SdpParseError*);

    MCNAPI JsepIceCandidate(::std::string const&, int);

    MCNAPI JsepIceCandidate(::std::string const&, int, ::cricket::Candidate const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const&, int);

    MCNAPI void* $ctor(::std::string const&, int, ::cricket::Candidate const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
