#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/deps/json/Value.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/trading/MerchantRecipe.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ItemStackBase;
class Trade2ContainerManagerController;
struct ActorUniqueID;
// clang-format on

class Trade2ScreenController : public ::ContainerScreenController {
public:
    // Trade2ScreenController inner types declare
    // clang-format off
    class TradeItemCollections;
    // clang-format on

    // Trade2ScreenController inner types define
    enum class LeftTabIndex : int {
        Inventory = 0,
        Trade     = 1,
        Count     = 2,
    };

    class TradeItemCollections {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::Json::Value const>                mCollections;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasTradeItem1Collection;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasTradeItem2Collection;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasSellItemCollection;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasValidTradeItemCollections;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>               mHasValidTradeToggleCollections;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                mTierIndex;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                mTradeIndex;
        ::ll::TypedStorage<8, 16, ::std::optional<::MerchantRecipe*>> mTrade;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Trade2ContainerManagerController>> mTradeContainerManagerController;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                    mNumberOfTradesByTier;
    ::ll::TypedStorage<4, 4, int>                                                    mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                                                    mLastExp;
    ::ll::TypedStorage<4, 4, int>                                                    mNewExp;
    ::ll::TypedStorage<4, 4, int>                                                    mExpAnimationTimer;
    ::ll::TypedStorage<1, 1, bool>                                                   mShowVisualOffer;
    ::ll::TypedStorage<8, 432, ::MerchantRecipe>                                     mVisualOffer;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                       mVisualBuyAItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                       mVisualBuyBItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                       mVisualSellItem;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade2ScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Trade2ScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotPressed(::std::string const& collectionName, int index) /*override*/;

    virtual bool _getGestureControlEnabled() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual ::ItemStackBase const&
    _getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const /*override*/;

    virtual void _sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    ) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Trade2ScreenController(::std::shared_ptr<::ClientInstanceScreenModel> pModel, ::ActorUniqueID uniqueID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> pModel, ::ActorUniqueID uniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
