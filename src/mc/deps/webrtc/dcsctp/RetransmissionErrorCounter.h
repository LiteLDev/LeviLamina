#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class RetransmissionErrorCounter {
public:
    // prevent constructor by default
    RetransmissionErrorCounter& operator=(RetransmissionErrorCounter const&);
    RetransmissionErrorCounter(RetransmissionErrorCounter const&);
    RetransmissionErrorCounter();

public:
    // NOLINTBEGIN
    // symbol: ?Clear@RetransmissionErrorCounter@dcsctp@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?Increment@RetransmissionErrorCounter@dcsctp@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool Increment(std::string_view);

    // symbol: ??1RetransmissionErrorCounter@dcsctp@@QEAA@XZ
    MCAPI ~RetransmissionErrorCounter();

    // NOLINTEND
};

}; // namespace dcsctp
