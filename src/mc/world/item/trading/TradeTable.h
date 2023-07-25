#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeTable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADETABLE
public:
    TradeTable& operator=(TradeTable const&) = delete;
    TradeTable(TradeTable const&)            = delete;
    TradeTable()                             = delete;
#endif

public:
};
