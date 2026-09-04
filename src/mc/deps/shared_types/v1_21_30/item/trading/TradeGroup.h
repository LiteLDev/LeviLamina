#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_30 { struct Trade; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                            mNumToSelect;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_30::Trade>> mTrades;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
