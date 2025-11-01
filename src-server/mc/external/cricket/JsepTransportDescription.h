#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct TransportDescription; }
// clang-format on

namespace cricket {

struct JsepTransportDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk21ae85;
    ::ll::UntypedStorage<8, 24>  mUnk5c775e;
    ::ll::UntypedStorage<4, 4>   mUnkcb1922;
    ::ll::UntypedStorage<8, 104> mUnkcaa892;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepTransportDescription& operator=(JsepTransportDescription const&);
    JsepTransportDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsepTransportDescription(::cricket::JsepTransportDescription const& from);

    MCNAPI JsepTransportDescription(
        bool                                   rtcp_mux_enabled,
        ::std::vector<int> const&              encrypted_header_extension_ids,
        int                                    rtp_abs_sendtime_extn_id,
        ::cricket::TransportDescription const& transport_desc
    );

    MCNAPI ~JsepTransportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::JsepTransportDescription const& from);

    MCNAPI void* $ctor(
        bool                                   rtcp_mux_enabled,
        ::std::vector<int> const&              encrypted_header_extension_ids,
        int                                    rtp_abs_sendtime_extn_id,
        ::cricket::TransportDescription const& transport_desc
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
