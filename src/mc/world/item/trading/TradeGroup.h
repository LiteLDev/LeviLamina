#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeGroup {
public:
    // prevent constructor by default
    TradeGroup& operator=(TradeGroup const&);
    TradeGroup(TradeGroup const&);
    TradeGroup();

public:
    // NOLINTBEGIN
    MCAPI ~TradeGroup();

    // NOLINTEND
};
