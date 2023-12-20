#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceTransportStats {
public:
    // prevent constructor by default
    IceTransportStats& operator=(IceTransportStats const&);
    IceTransportStats();

public:
    // NOLINTBEGIN
    // symbol: ??0IceTransportStats@cricket@@QEAA@AEBU01@@Z
    MCAPI IceTransportStats(struct cricket::IceTransportStats const&);

    // symbol: ??1IceTransportStats@cricket@@QEAA@XZ
    MCAPI ~IceTransportStats();

    // NOLINTEND
};

}; // namespace cricket
