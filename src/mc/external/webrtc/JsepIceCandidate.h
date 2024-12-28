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
    JsepIceCandidate& operator=(JsepIceCandidate const&);
    JsepIceCandidate(JsepIceCandidate const&);
    JsepIceCandidate();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Initialize(::std::string const&, ::webrtc::SdpParseError*);

    MCAPI JsepIceCandidate(::std::string const&, int);

    MCAPI JsepIceCandidate(::std::string const&, int, ::cricket::Candidate const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const&, int);

    MCAPI void* $ctor(::std::string const&, int, ::cricket::Candidate const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
