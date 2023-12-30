#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct ProtocolAddress {
public:
    // prevent constructor by default
    ProtocolAddress& operator=(ProtocolAddress const&);
    ProtocolAddress(ProtocolAddress const&);
    ProtocolAddress();

public:
    // NOLINTBEGIN
    // symbol: ??1ProtocolAddress@cricket@@QEAA@XZ
    MCAPI ~ProtocolAddress();

    // NOLINTEND
};

}; // namespace cricket
