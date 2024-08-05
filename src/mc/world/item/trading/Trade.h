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
    MCAPI struct Trade& operator=(struct Trade&&);

    MCAPI ~Trade();

    // NOLINTEND
};
