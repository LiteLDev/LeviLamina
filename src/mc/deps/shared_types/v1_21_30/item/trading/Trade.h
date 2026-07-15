#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_30 { struct TradeItemList; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_30::TradeItemList>> mWants;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_30::TradeItemList>> mGives;
    ::ll::TypedStorage<4, 4, uint>                                                   mTraderExp;
    ::ll::TypedStorage<4, 4, int>                                                    mMaxUses;
    ::ll::TypedStorage<1, 1, bool>                                                   mRewardExp;
    ::ll::TypedStorage<4, 4, int>                                                    mWeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~Trade();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
