#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
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
    // prevent constructor by default
    TradeOfferQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;

    virtual ~TradeOfferQuery() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeOfferQuery(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        int                                tradeTier,
        int                                tradeIndex
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        int                                tradeTier,
        int                                tradeIndex
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
