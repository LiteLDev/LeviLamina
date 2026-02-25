#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct TradeOfferInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           isOutOfUses;
    ::ll::TypedStorage<8, 32, ::std::string> buyAItemName;
    ::ll::TypedStorage<8, 32, ::std::string> buyBItemName;
    ::ll::TypedStorage<8, 32, ::std::string> sellItemName;
    ::ll::TypedStorage<4, 4, int>            buyAItemAmount;
    ::ll::TypedStorage<4, 4, int>            buyBItemAmount;
    ::ll::TypedStorage<4, 4, int>            sellItemAmount;
    ::ll::TypedStorage<8, 32, ::std::string> buyAItemImage;
    ::ll::TypedStorage<8, 32, ::std::string> buyBItemImage;
    ::ll::TypedStorage<8, 32, ::std::string> sellItemImage;
    ::ll::TypedStorage<1, 1, bool>           hasSecondaryBuyItem;
    ::ll::TypedStorage<1, 1, bool>           playerHasItemsForTrade;
    ::ll::TypedStorage<1, 1, bool>           isSelectedTrade;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TradeOfferInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
