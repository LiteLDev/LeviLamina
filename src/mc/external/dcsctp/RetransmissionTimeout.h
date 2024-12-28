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
    RetransmissionTimeout& operator=(RetransmissionTimeout const&);
    RetransmissionTimeout(RetransmissionTimeout const&);
    RetransmissionTimeout();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ObserveRTT(::webrtc::TimeDelta);

    MCAPI explicit RetransmissionTimeout(::dcsctp::DcSctpOptions const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::dcsctp::DcSctpOptions const&);
    // NOLINTEND
};

} // namespace dcsctp
