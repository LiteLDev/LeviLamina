#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Trade;
// clang-format on

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mNumToSelect;
    ::ll::TypedStorage<8, 24, ::std::vector<::Trade>> mTrades;
    // NOLINTEND

};
