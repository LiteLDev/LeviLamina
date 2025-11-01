#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
struct TradeTier;
// clang-format on

struct TradeTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::TradeTier>> mTiers;
    // NOLINTEND

};
