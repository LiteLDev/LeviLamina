#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeTier {
public:
    // prevent constructor by default
    TradeTier& operator=(TradeTier const&);
    TradeTier(TradeTier const&);
    TradeTier();

public:
    // NOLINTBEGIN
    MCAPI ~TradeTier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
