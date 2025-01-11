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
    // member functions
    // NOLINTBEGIN
    MCAPI bool GetMediasectionIndex(::webrtc::IceCandidateInterface const*, uint64*);

    MCAPI int GetMediasectionIndex(::cricket::Candidate const&);

    MCAPI bool Initialize(::std::unique_ptr<::cricket::SessionDescription>, ::std::string const&, ::std::string const&);

    MCAPI explicit JsepSessionDescription(::webrtc::SdpType);

    MCAPI JsepSessionDescription(
        ::webrtc::SdpType,
        ::std::unique_ptr<::cricket::SessionDescription>,
        ::std::string_view,
        ::std::string_view
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::SdpType);

    MCAPI void* $ctor(
        ::webrtc::SdpType,
        ::std::unique_ptr<::cricket::SessionDescription>,
        ::std::string_view,
        ::std::string_view
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
