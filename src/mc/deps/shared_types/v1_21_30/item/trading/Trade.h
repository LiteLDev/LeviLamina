#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_30 { struct TradeItemList; }
namespace cereal { struct ReflectionCtx; }
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
    // prevent constructor by default
    Trade(Trade const&);
    Trade();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_30::Trade& operator=(::SharedTypes::v1_21_30::Trade&&);

    MCAPI ::SharedTypes::v1_21_30::Trade& operator=(::SharedTypes::v1_21_30::Trade const&);

    MCAPI ~Trade();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
