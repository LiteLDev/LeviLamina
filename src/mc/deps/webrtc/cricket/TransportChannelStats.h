#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportChannelStats {
public:
    // prevent constructor by default
    TransportChannelStats& operator=(TransportChannelStats const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TransportChannelStats@cricket@@QEAA@XZ
    MCAPI TransportChannelStats();

    // symbol: ??0TransportChannelStats@cricket@@QEAA@AEBU01@@Z
    MCAPI TransportChannelStats(struct cricket::TransportChannelStats const&);

    // symbol: ??1TransportChannelStats@cricket@@QEAA@XZ
    MCAPI ~TransportChannelStats();

    // NOLINTEND
};

}; // namespace cricket
