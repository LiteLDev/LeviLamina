#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/trading/MerchantRecipe.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ItemStackBase;
class Trade2ContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class Trade2ScreenController : public ::ContainerScreenController {
public:
    // Trade2ScreenController inner types declare
    // clang-format off
    struct TradeItemCollections;
    // clang-format on

    // Trade2ScreenController inner types define
    enum class LeftTabIndex : int {};

    struct TradeItemCollections {};

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

    MCAPI void _changeLeftTab(int dir);

    MCAPI ::ItemInstance const& _getItemForTrade(::Trade2ScreenController::TradeItemCollections const& tic) const;

    MCAPI ::std::string _getTradeErrorDetails(::ItemStackBase const& item, bool itemA) const;

    MCAPI bool _hasAdjustedBuyCount(::Trade2ScreenController::TradeItemCollections const& tic) const;

    MCAPI void _makeEnchantmentDetails() const;

    MCAPI void _makeTradeDetails(bool itemA) const;

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerStateMachine();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& SELL_ITEM_COLLECTION();

    MCAPI static ::std::string_view const& TIER_COLLECTION();

    MCAPI static ::std::string_view const& TRADE_COLLECTION();

    MCAPI static ::std::string_view const& TRADE_ITEM_1_COLLECTION();

    MCAPI static ::std::string_view const& TRADE_ITEM_2_COLLECTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> pModel, ::ActorUniqueID uniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onLeave();

    MCAPI ::ui::ViewRequest $_onContainerSlotPressed(::std::string const& collectionName, int index);

    MCFOLD bool $_getGestureControlEnabled() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCFOLD bool $_isStillValid() const;

    MCAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void $_sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );

    MCAPI ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
