#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"
#include "mc/client/social/IToastListener.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
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
class UIPropertyBag;
struct ActorUniqueID;
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
    struct CategoryTabInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InventoryLeftTabIndex>             tabIndex;
        ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> category;
        ::ll::TypedStorage<1, 1, ::ContainerEnumName>                 container;
        ::ll::TypedStorage<8, 32, ::std::string>                      tabName;
        // NOLINTEND
    };

    struct ScrollItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::SlotData> mSlot;
        ::ll::TypedStorage<4, 4, int>         mNumExpandedItems;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag> mDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CraftingContainerManagerController>>
                                                                          mCraftingContainerManagerController;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>             mDelayedSearchString;
    ::ll::TypedStorage<1, 1, bool>                                        mWorkbench;
    ::ll::TypedStorage<1, 1, bool>                                        mPocket;
    ::ll::TypedStorage<1, 1, bool>                                        mCraftableFilterOn;
    ::ll::TypedStorage<4, 4, ::CraftingType>                              mCraftingType;
    ::ll::TypedStorage<1, 1, bool>                                        mEntered;
    ::ll::TypedStorage<4, 4, int>                                         mLayout;
    ::ll::TypedStorage<4, 4, int>                                         mSavedLayout;
    ::ll::TypedStorage<4, 4, int>                                         mCurrentlySelectedIndex;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                            mCurrentlySelectedItem;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                                        mCanReselectRecipeIndex;
    ::ll::TypedStorage<1, 1, bool>                                        mIngredientSetChanged;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedFirstTabSelection;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedDefaultFocusSet;
    ::ll::TypedStorage<1, 1, bool>                                        mSearchBarSelected;
    ::ll::TypedStorage<1, 1, bool>                                        mCanCreativeHotbarSwap;
    ::ll::TypedStorage<1, 1, bool>                                        mRecipeLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mUseRecipeUnlocking;
    ::ll::TypedStorage<4, 4, int>                                         mFocusRestorationContextSelectedTab;
    ::ll::TypedStorage<8, 40, ::SlotData>                                 mFocusRestorationContext;
    ::ll::TypedStorage<8, 32, ::std::string>                              mRepeatCollectionName;
    ::ll::TypedStorage<4, 4, int>                                         mRepeatCollectionIndex;
    ::ll::TypedStorage<4, 4, int>                                         mRepeatCraftStartTime;
    ::ll::TypedStorage<4, 4, int>                                         mRepeatCraftLoopStartTime;
    ::ll::TypedStorage<8, 48, ::CraftingScreenController::ScrollItemData> mNeedToScrollToItem;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData>                   mRepeatCraftButton;
    ::ll::TypedStorage<4, 4, int>                                         mTabFiltersDirty;
    ::ll::TypedStorage<4, 4, int>                                         mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                                         mSelectedRightTab;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void showToast(::ToastMessage, bool) /*override*/;

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

    virtual bool _isInCreativeContainer(::std::string const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftingScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::CraftingType                                 craftingType
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addStaticScreenVars(::Json::Value& globalVars, bool pocket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::CraftingType                                 craftingType
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
