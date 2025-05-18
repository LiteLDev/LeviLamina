#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct DcSctpOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

struct RetransmissionTimeout {
public:
    // prevent constructor by default
    RetransmissionTimeout();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ObserveRTT(::webrtc::TimeDelta);

    MCNAPI explicit RetransmissionTimeout(::dcsctp::DcSctpOptions const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dcsctp::DcSctpOptions const&);
    // NOLINTEND
};

} // namespace dcsctp
