#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Trade {
public:
    // prevent constructor by default
    Trade& operator=(Trade const&);
    Trade(Trade const&);
    Trade();

public:
    // NOLINTBEGIN
    // symbol: ??4Trade@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct Trade& operator=(struct Trade&&);

    // symbol: ??1Trade@@QEAA@XZ
    MCAPI ~Trade();

    // NOLINTEND
};
