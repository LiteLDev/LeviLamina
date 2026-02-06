#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/CategoryTabState.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"
#include "mc/client/social/IToastListener.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemCraftType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class CraftingContainerManagerController;
class ItemStackBase;
class Player;
class ToastMessage;
struct ActorUniqueID;
struct AutoPlaceResult;
struct UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class CraftingScreenController : public ::ContainerScreenController, public ::IToastListener {
public:
    // CraftingScreenController inner types declare
    // clang-format off
    struct CategoryTabInfo;
    struct ScrollItemData;
    // clang-format on

    // CraftingScreenController inner types define
    struct CategoryTabInfo {};

    struct ScrollItemData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag> mDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CraftingContainerManagerController>>
                                                              mCraftingContainerManagerController;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDelayedCraftingContainerManagerControllerSearchString;
    ::ll::TypedStorage<1, 1, bool>                            mWorkbench;
    ::ll::TypedStorage<1, 1, bool>                            mPocket;
    ::ll::TypedStorage<1, 1, bool>                            mFilteringOn;
    ::ll::TypedStorage<4, 4, ::CraftingType>                  mCraftingType;
    ::ll::TypedStorage<1, 1, bool>                            mEntered;
    ::ll::TypedStorage<4, 4, int>                             mInventoryLayout;
    ::ll::TypedStorage<4, 4, int>                             mSavedInventoryLayout;
    ::ll::TypedStorage<4, 4, int>                             mCurrentlySelectedIndex;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                mCurrentlySelectedItem;
    ::ll::TypedStorage<1, 1, bool>                            mNeedReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                            mCanReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                            mIngredientSetChanged;
    ::ll::TypedStorage<1, 1, bool>                            mNeedFirstTabSelection;
    ::ll::TypedStorage<1, 1, bool>                            mNeedDefaultFocusSet;
    ::ll::TypedStorage<4, 4, int>                             mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                             mSelectedRightTab;
    ::ll::TypedStorage<1, 1, bool>                            mSearchBarSelected;
    ::ll::TypedStorage<1, 1, bool>                            mCanCreativeHotbarSwap;
    ::ll::TypedStorage<1, 1, bool>                            mRecipeLocked;
    ::ll::TypedStorage<1, 1, bool>                            mHasInitalCategoryTabsState;
    ::ll::TypedStorage<1, 1, bool>                            mUseRecipeUnlocking;
    ::ll::TypedStorage<4, 4, int>                             mFocusRestorationContextSelectedTab;
    ::ll::TypedStorage<8, 40, ::SlotData>                     mFocusRestorationContext;
    ::ll::TypedStorage<4, 4, int>                             mTabFiltersDirty;
    ::ll::TypedStorage<8, 32, ::std::string>                  mRepeatCollectionName;
    ::ll::TypedStorage<4, 4, int>                             mRepeatCollectionIndex;
    ::ll::TypedStorage<4, 4, int>                             mRepeatCraftStartTime;
    ::ll::TypedStorage<4, 4, int>                             mRepeatCraftLoopStartTime;
    ::ll::TypedStorage<4, 4, int>                             mTicksLeftUntilCategoryTabUpdate;
    ::ll::TypedStorage<8, 48, ::CraftingScreenController::ScrollItemData>                        mNeedToScrollToItem;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData>                                          mRepeatCraftButton;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InventoryLeftTabIndex, ::CategoryTabState>> mCategoryTabsState;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onEntered() /*override*/;

    virtual void showToast(::ToastMessage message, bool animateIn) /*override*/;

    virtual void removeToast() /*override*/;

    virtual void refreshToast() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _handlePlaceAll(::std::string const& collectionName, int index) /*override*/;

    virtual void _handlePlaceOne(::std::string const& collectionName, int index) /*override*/;

    virtual void _handleSelectSlot(::std::string const& collectionName, int collectionIndex) /*override*/;

    virtual ::ItemStackBase const&
    _getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::std::string _getButtonYDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotPressed(::std::string const& collectionName, int index) /*override*/;

    virtual ::std::string _getCollectionName(::UIPropertyBag* bag) const /*override*/;

    virtual ::SlotData _reevaluateSlotData(::SlotData&& slotData) const /*override*/;

    virtual bool _shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const /*override*/;

    virtual bool _isTargetSwappable(::std::string const& otherCollectionName, int otherCollectionIndex) const
        /*override*/;

    virtual void _sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    ) /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual bool _isInCreativeContainer(::std::string const& containerName) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftingScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        bool                                           workbench,
        bool                                           pocket,
        ::CraftingType                                 craftingType
    );

    MCAPI bool _currentItemIsSelected(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void _cycleInventoryLayout(int dir);

    MCAPI void _cycleRightSideInventoryTab(int dir);

    MCAPI void _destroyCategoryTabs();

    MCAPI void _evacuateCraftingGrid();

    MCAPI int _findNextLeftSideInventoryTab(int dir) const;

    MCAPI void _focusCollectionItem(::std::string const& collectionName, int collectionIndex);

    MCAPI ::std::string _getButtonLeftStickDescription() const;

    MCAPI ::std::string _getCraftStackText() const;

    MCAPI ::std::string _getExpandoItemGroupName(::std::string const& collectionName, int collectionIndex);

    MCAPI ::std::string _getRecipeHoverText(::std::string const& collectionName, int collectionIndex);

    MCAPI void _handleCraftItem(::ItemCraftType);

    MCAPI void _handleCreativeHotbarPlaceAll(::std::string const& collectionName, int collectionIndex);

    MCAPI void _handleCreativeHotbarPlaceOne(::std::string const& collectionName, int collectionIndex);

    MCAPI void _handleRecipeSelect(::std::string const& collectionName, int collectionIndex, bool displayOnly);

    MCAPI bool _isCreativeLayoutAvailable() const;

    MCAPI void _loadPlayerInventoryOptions();

    MCAPI ::ui::ViewRequest
    _recipeAutoCraft(::std::string const& collectionName, int collectionIndex, ::ItemCraftType craftType);

    MCAPI void _refreshFilters(::InventoryLeftTabIndex tab, bool forceRefresh);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerStateMachine();

    MCAPI void _savePlayerInventoryOptions();

    MCAPI void _sendActiveInventoryLayoutInfo();

    MCAPI void _setInitialTabsSelected(int defaultLeftTab, int defaultRightTab);

    MCAPI void _setInventoryLayout(int layoutIndex, bool saveOptions);

    MCAPI void _setIsFiltering(bool filter);

    MCAPI void _setLeftSideInventoryTab(int tabIndex, bool saveOptions);

    MCAPI bool _shouldAlwaysShowAllTabs() const;

    MCAPI void _showAllTabs();

    MCAPI void
    _showCategoryTab(::CraftingScreenController::CategoryTabInfo const& categoryTab, bool animated, int tabsToSlide);

    MCAPI ::std::string _tabIndexToCollectionName(::InventoryLeftTabIndex index) const;

    MCAPI int _tryAutoPlaceItemIntoContainer(
        ::SlotData const&                 srcSlot,
        ::ItemTakeType                    type,
        ::ContainerEnumName               containerName,
        ::std::vector<::AutoPlaceResult>& autoPlaceResults
    );

    MCAPI void _tryHoverOnIngredientSetChanged();

    MCAPI ::ui::DirtyFlag _updateCategoryTabs();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addStaticScreenVars(::Json::Value& globalVars, bool pocket);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& RECIPE_BOOK_COLLECTION_NAME();

    MCAPI static ::std::vector<::CraftingScreenController::CategoryTabInfo> const& mCategoryTabs();

    MCAPI static int& mTabsWaitingToBeAnimatedIn();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        bool                                           workbench,
        bool                                           pocket,
        ::CraftingType                                 craftingType
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
    MCAPI void $onOpen();

    MCAPI void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onEntered();

    MCAPI void $showToast(::ToastMessage message, bool animateIn);

    MCAPI void $removeToast();

    MCAPI void $refreshToast();

    MCAPI bool $_isStillValid() const;

    MCAPI void $_handlePlaceAll(::std::string const& collectionName, int index);

    MCAPI void $_handlePlaceOne(::std::string const& collectionName, int index);

    MCAPI void $_handleSelectSlot(::std::string const& collectionName, int collectionIndex);

    MCAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonBDescription();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onContainerSlotPressed(::std::string const& collectionName, int index);

    MCAPI ::std::string $_getCollectionName(::UIPropertyBag* bag) const;

    MCAPI ::SlotData $_reevaluateSlotData(::SlotData&& slotData) const;

    MCAPI bool $_shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const;

    MCAPI bool $_isTargetSwappable(::std::string const& otherCollectionName, int otherCollectionIndex) const;

    MCAPI void $_sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI bool $_isInCreativeContainer(::std::string const& containerName) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
