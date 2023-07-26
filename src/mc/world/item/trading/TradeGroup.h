#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeGroup {

public:
    // prevent constructor by default
    TradeGroup& operator=(TradeGroup const&) = delete;
    TradeGroup(TradeGroup const&)            = delete;
    TradeGroup()                             = delete;

public:
    /**
     * @symbol ??1TradeGroup\@\@QEAA\@XZ
     */
    MCAPI ~TradeGroup(); // NOLINT
};
