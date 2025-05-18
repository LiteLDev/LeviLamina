#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class SessionDescription; }
namespace webrtc { class IceCandidateInterface; }
// clang-format on

namespace webrtc {

class JsepSessionDescription {
public:
    // prevent constructor by default
    JsepSessionDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool GetMediasectionIndex(::webrtc::IceCandidateInterface const*, uint64*);

    MCNAPI int GetMediasectionIndex(::cricket::Candidate const&);

    MCNAPI bool
    Initialize(::std::unique_ptr<::cricket::SessionDescription>, ::std::string const&, ::std::string const&);

    MCNAPI explicit JsepSessionDescription(::webrtc::SdpType);

    MCNAPI JsepSessionDescription(
        ::webrtc::SdpType,
        ::std::unique_ptr<::cricket::SessionDescription>,
        ::std::string_view,
        ::std::string_view
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SdpType);

    MCNAPI void* $ctor(
        ::webrtc::SdpType,
        ::std::unique_ptr<::cricket::SessionDescription>,
        ::std::string_view,
        ::std::string_view
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
