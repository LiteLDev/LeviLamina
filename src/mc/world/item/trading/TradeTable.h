#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk570921;
    ::ll::UntypedStorage<8, 24> mUnk456163;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTable& operator=(TradeTable const&);
    TradeTable(TradeTable const&);
    TradeTable();
};
