#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct TransportDescription; }
// clang-format on

namespace webrtc {

struct JsepTransportDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnke9bab4;
    ::ll::UntypedStorage<8, 24>  mUnk8d0fd3;
    ::ll::UntypedStorage<4, 4>   mUnkdebd0b;
    ::ll::UntypedStorage<8, 104> mUnk539a45;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepTransportDescription& operator=(JsepTransportDescription const&);
    JsepTransportDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsepTransportDescription(::webrtc::JsepTransportDescription const& from);

    MCNAPI JsepTransportDescription(
        bool                                  rtcp_mux_enabled,
        ::std::vector<int> const&             encrypted_header_extension_ids,
        int                                   rtp_abs_sendtime_extn_id,
        ::webrtc::TransportDescription const& transport_desc
    );

    MCNAPI ~JsepTransportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::JsepTransportDescription const& from);

    MCNAPI void* $ctor(
        bool                                  rtcp_mux_enabled,
        ::std::vector<int> const&             encrypted_header_extension_ids,
        int                                   rtp_abs_sendtime_extn_id,
        ::webrtc::TransportDescription const& transport_desc
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
