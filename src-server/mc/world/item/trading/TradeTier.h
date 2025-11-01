#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TradeGroup;
// clang-format on

struct TradeTier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mExpToUnlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::TradeGroup>> mGroups;
    // NOLINTEND

};
