#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TradeItem;
// clang-format on

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMaxUses;
    ::ll::TypedStorage<1, 1, bool> mRewardExperience;
    ::ll::TypedStorage<4, 4, int> mWeight;
    ::ll::TypedStorage<4, 4, uint> mTraderExperience;
    ::ll::TypedStorage<4, 4, int> mPrimaryOfferCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::TradeItem>>> mOffer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::TradeItem>>> mReceive;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Trade();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
