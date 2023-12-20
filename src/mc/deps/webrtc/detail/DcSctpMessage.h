#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DcSctpMessage {
public:
    // prevent constructor by default
    DcSctpMessage& operator=(DcSctpMessage const&);
    DcSctpMessage(DcSctpMessage const&);
    DcSctpMessage();

public:
    // NOLINTBEGIN
    // symbol: ??1DcSctpMessage@dcsctp@@QEAA@XZ
    MCAPI ~DcSctpMessage();

    // NOLINTEND
};

}; // namespace dcsctp
