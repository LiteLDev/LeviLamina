#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/item/FurnaceItemCategory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class FurnaceContainerManagerController;
class ItemStack;
class ItemStackBase;
class Player;
class UIPropertyBag;
struct ActorUniqueID;
struct SlotData;
namespace Json { class Value; }
// clang-format on

class FurnaceScreenController : public ::ContainerScreenController {
public:
    // FurnaceScreenController inner types declare
    // clang-format off
    struct CategoryTabInfo;
    // clang-format on

    // FurnaceScreenController inner types define
    enum class CategoryTabState : int {
        Visible = 0,
        Hidden  = 1,
    };

    struct CategoryTabInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FurnaceItemCategory> category;
        ::ll::TypedStorage<1, 1, ::ContainerEnumName>   containerEnum;
        ::ll::TypedStorage<8, 32, ::std::string>        tabName;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::FurnaceContainerManagerController>>
                                                              mFurnaceContainerManagerController;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>             mHoveredContainer;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const>       mIngredientEnumName;
    ::ll::TypedStorage<4, 4, int>                             mStartHeldFurnaceResultTime;
    ::ll::TypedStorage<1, 1, bool>                            mPocket;
    ::ll::TypedStorage<1, 1, bool>                            mEntered;
    ::ll::TypedStorage<1, 1, bool>                            mUseRecipeUnlocking;
    ::ll::TypedStorage<4, 4, int>                             mLayout;
    ::ll::TypedStorage<4, 4, int>                             mSavedLayout;
    ::ll::TypedStorage<1, 1, bool>                            mSmeltableFilterOn;
    ::ll::TypedStorage<1, 1, bool>                            mSearchBarSelected;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDelayedSearchString;
    ::ll::TypedStorage<1, 1, bool>                            mHasInitalCategoryTabsState;
    ::ll::TypedStorage<4, 4, int>                             mTTSPreviousIngredientId;
    ::ll::TypedStorage<4, 4, int>                             mTicksLeftUntilCategoryTabUpdate;
    ::ll::TypedStorage<4, 4, int>                             mTabFiltersDirty;
    ::ll::TypedStorage<8, 48, ::HashedString>                 mRecipeTag;
    ::ll::TypedStorage<4, 4, int>                             mSelectedLeftTab;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _handlePlaceAll(::std::string const& collectionName, int index) /*override*/;

    virtual void _handlePlaceOne(::std::string const& collectionName, int index) /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::std::string _getCollectionName(::UIPropertyBag* bag) const /*override*/;

    virtual ::SlotData _reevaluateSlotData(::SlotData&& slotData) const /*override*/;

    virtual ::ItemStackBase const&
    _getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const /*override*/;

    virtual bool _shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const /*override*/;

    virtual void _handleSelectSlot(::std::string const& collectionName, int collectionIndex) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::std::string _getButtonYDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;

    virtual bool _isInCreativeContainer(::std::string const& containerName) const /*override*/;

    virtual void _sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FurnaceScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::HashedString const&                          recipeTag
    );

    MCNAPI int _findNextLeftSideTab(int dir) const;

    MCNAPI void _handleClearGrid();

    MCNAPI bool _isRecipeIngredientSelected(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI void _refreshFilters(int tabIndex, bool forceRefresh);

    MCNAPI void _savePlayerOptions();

    MCNAPI void _selectRecipe(::std::string const& collectionName, int collectionIndex);

    MCNAPI void _setLeftSideTab(int tabIndex);

    MCNAPI void _tryAddTTSMessageForFurnaceAction(::ItemStack const& ingredientItem, ::ItemStack const& resultItem);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<int, ::FurnaceScreenController::CategoryTabInfo> const& mCategoryTabs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::HashedString const&                          recipeTag
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onEntered();

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI bool $_isStillValid() const;

    MCNAPI void $_handlePlaceAll(::std::string const& collectionName, int index);

    MCNAPI void $_handlePlaceOne(::std::string const& collectionName, int index);

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();

    MCNAPI ::std::string $_getCollectionName(::UIPropertyBag* bag) const;

    MCNAPI ::SlotData $_reevaluateSlotData(::SlotData&& slotData) const;

    MCNAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI bool $_shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const;

    MCNAPI void $_handleSelectSlot(::std::string const& collectionName, int collectionIndex);

    MCNAPI ::std::string $_getButtonADescription();

    MCNAPI ::std::string $_getButtonBDescription();

    MCNAPI ::std::string $_getButtonXDescription();

    MCNAPI ::std::string $_getButtonYDescription();

    MCNAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);

    MCNAPI bool $_isInCreativeContainer(::std::string const& containerName) const;

    MCNAPI void $_sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );
    // NOLINTEND
};
