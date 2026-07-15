#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PayloadType; }
namespace webrtc { class RTCError; }
namespace webrtc { struct Codec; }
// clang-format on

namespace webrtc {

class PayloadTypeSuggester {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PayloadTypeSuggester() = default;

    virtual ::webrtc::RTCErrorOr<::webrtc::PayloadType>
    SuggestPayloadType(::std::string const& mid, ::webrtc::Codec codec) = 0;

    virtual ::webrtc::RTCError
    AddLocalMapping(::std::string const& mid, ::webrtc::PayloadType payload_type, ::webrtc::Codec const& codec) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
