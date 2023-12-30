#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
namespace dcsctp { struct DcSctpOptions; }
// clang-format on

namespace dcsctp {

class RetransmissionTimeout {
public:
    // prevent constructor by default
    RetransmissionTimeout& operator=(RetransmissionTimeout const&);
    RetransmissionTimeout(RetransmissionTimeout const&);
    RetransmissionTimeout();

public:
    // NOLINTBEGIN
    // symbol: ?ObserveRTT@RetransmissionTimeout@dcsctp@@QEAAXVDurationMs@2@@Z
    MCAPI void ObserveRTT(class dcsctp::DurationMs);

    // symbol: ??0RetransmissionTimeout@dcsctp@@QEAA@AEBUDcSctpOptions@1@@Z
    MCAPI explicit RetransmissionTimeout(struct dcsctp::DcSctpOptions const&);

    // NOLINTEND
};

}; // namespace dcsctp
