#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientInstanceNavigationHelper {

struct CoinPurchaseScreenParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3331b9;
    ::ll::UntypedStorage<8, 8>  mUnkf081fc;
    ::ll::UntypedStorage<8, 8>  mUnked5388;
    ::ll::UntypedStorage<8, 8>  mUnkec4aee;
    ::ll::UntypedStorage<8, 8>  mUnkf7bbfc;
    ::ll::UntypedStorage<8, 8>  mUnkec6477;
    ::ll::UntypedStorage<8, 8>  mUnka57392;
    ::ll::UntypedStorage<4, 4>  mUnk95f3b6;
    ::ll::UntypedStorage<8, 64> mUnk4bede7;
    // NOLINTEND

public:
    // prevent constructor by default
    CoinPurchaseScreenParams& operator=(CoinPurchaseScreenParams const&);
    CoinPurchaseScreenParams(CoinPurchaseScreenParams const&);
    CoinPurchaseScreenParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CoinPurchaseScreenParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientInstanceNavigationHelper
