#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // prevent constructor by default
    NetworkAddress& operator=(NetworkAddress const&);
    NetworkAddress(NetworkAddress const&);
    NetworkAddress();

public:
    // NOLINTBEGIN
    // symbol: ??1NetworkAddress@@QEAA@XZ
    MCAPI ~NetworkAddress();

    // NOLINTEND
};
