#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeTable {

public:
    // prevent constructor by default
    TradeTable& operator=(TradeTable const&) = delete;
    TradeTable(TradeTable const&)            = delete;
    TradeTable()                             = delete;
};
