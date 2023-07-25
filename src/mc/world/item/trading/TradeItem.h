#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEITEM
public:
    TradeItem& operator=(TradeItem const&) = delete;
    TradeItem(TradeItem const&)            = delete;
    TradeItem()                            = delete;
#endif

public:
    /**
     * @symbol ??4TradeItem\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct TradeItem& operator=(struct TradeItem&&);
    /**
     * @symbol ??1TradeItem\@\@QEAA\@XZ
     */
    MCAPI ~TradeItem();
};
