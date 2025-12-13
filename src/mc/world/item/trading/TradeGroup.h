#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4b07d9;
    ::ll::UntypedStorage<8, 24> mUnkd696d3;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeGroup& operator=(TradeGroup const&);
    TradeGroup(TradeGroup const&);
    TradeGroup();
};
