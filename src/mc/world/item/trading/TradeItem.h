#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeItem {
public:
    // prevent constructor by default
    TradeItem& operator=(TradeItem const&);
    TradeItem(TradeItem const&);
    TradeItem();

public:
    // NOLINTBEGIN
    MCAPI struct TradeItem& operator=(struct TradeItem&& item);

    MCAPI ~TradeItem();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
