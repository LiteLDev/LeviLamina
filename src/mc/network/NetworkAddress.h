#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // prevent constructor by default
    NetworkAddress(NetworkAddress const&);
    NetworkAddress();

public:
    // NOLINTBEGIN
    // symbol: ?isValid@NetworkAddress@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??4NetworkAddress@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct NetworkAddress& operator=(struct NetworkAddress const&);

    // symbol: ??1NetworkAddress@@QEAA@XZ
    MCAPI ~NetworkAddress();

    // NOLINTEND
};
