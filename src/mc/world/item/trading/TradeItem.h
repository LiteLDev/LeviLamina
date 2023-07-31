#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeItem {

public:
    // prevent constructor by default
    TradeItem& operator=(TradeItem const&) = delete;
    TradeItem(TradeItem const&)            = delete;
    TradeItem()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??4TradeItem\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct TradeItem& operator=(struct TradeItem&&);
    /**
     * @symbol ??1TradeItem\@\@QEAA\@XZ
     */
    MCAPI ~TradeItem();
    // NOLINTEND
};
