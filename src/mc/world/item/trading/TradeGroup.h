#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEGROUP
public:
    TradeGroup& operator=(TradeGroup const&) = delete;
    TradeGroup(TradeGroup const&)            = delete;
    TradeGroup()                             = delete;
#endif

public:
    /**
     * @symbol ??1TradeGroup\@\@QEAA\@XZ
     */
    MCAPI ~TradeGroup();
};
