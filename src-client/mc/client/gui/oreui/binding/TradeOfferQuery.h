#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

namespace OreUI {

class TradeOfferQuery : public ::OreUI::QueryBase<::OreUI::TradeOfferQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mIsOutOfUses;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyAItemName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyBItemName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mSellItemName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        mBuyAItemAmount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        mBuyBItemAmount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        mSellItemAmount;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyAItemImage;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mBuyBItemImage;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mSellItemImage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mHasSecondaryBuyItem;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mPlayerHasItemsForTrade;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mIsSelectedTrade;
    ::ll::TypedStorage<4, 4, int>                                                             mTradeTier;
    ::ll::TypedStorage<4, 4, int>                                                             mTradeIndex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
