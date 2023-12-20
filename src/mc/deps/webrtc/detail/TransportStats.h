#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportStats {
public:
    // prevent constructor by default
    TransportStats& operator=(TransportStats const&);
    TransportStats(TransportStats const&);
    TransportStats();

public:
    // NOLINTBEGIN
    // symbol: ??1TransportStats@cricket@@QEAA@XZ
    MCAPI ~TransportStats();

    // NOLINTEND
};

}; // namespace cricket
