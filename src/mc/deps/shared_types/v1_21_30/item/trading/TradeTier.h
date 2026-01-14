#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_30 { struct TradeGroup; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeTier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_30::TradeGroup>> mGroups;
    ::ll::TypedStorage<4, 4, uint>                                                mTotalExpRequired;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TradeTier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
