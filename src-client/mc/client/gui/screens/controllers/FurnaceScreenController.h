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
class ItemStackBase;
class Player;
class UIPropertyBag;
struct ActorUniqueID;
struct FurnaceOptions;
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CategoryTabInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
    ::ll::TypedStorage<1, 1, bool>                            mRecipeLocked;
    ::ll::TypedStorage<1, 1, bool>                            mUseRecipeUnlocking;
    ::ll::TypedStorage<4, 4, int>                             mLayout;
    ::ll::TypedStorage<4, 4, int>                             mSavedLayout;
    ::ll::TypedStorage<1, 1, bool>                            mSmeltableFilterOn;
    ::ll::TypedStorage<1, 1, bool>                            mSearchBarSelected;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDelayedSearchString;
    ::ll::TypedStorage<1, 1, bool>                            mHasInitalCategoryTabsState;
    ::ll::TypedStorage<4, 4, int>                             mTicksLeftUntilCategoryTabUpdate;
    ::ll::TypedStorage<4, 4, int>                             mTabFiltersDirty;
    ::ll::TypedStorage<8, 48, ::HashedString>                 mRecipeTag;
    ::ll::TypedStorage<4, 4, int>                             mSelectedLeftTab;
    ::ll::TypedStorage<8, 32, ::std::string>                  mSelectedCollectionName;
    ::ll::TypedStorage<4, 4, int>                             mSelectedCollectionIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

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
    MCAPI FurnaceScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::HashedString const&                          recipeTag
    );

    MCAPI int _findNextLeftSideTab(int dir) const;

    MCAPI ::std::string _getExpandoItemGroupName(::std::string const& collectionName, int collectionIndex);

    MCAPI ::FurnaceOptions const& _getFurnaceOptions() const;

    MCAPI ::std::string _getRecipeHoverText(::std::string const& collectionName, int collectionIndex);

    MCAPI void _handleClearGrid();

    MCAPI void _handleRecipeBookSelectSlot(::std::string const& collectionName, int collectionIndex);

    MCAPI bool _isBlocksTabVisible() const;

    MCAPI bool _isFoodTabVisible() const;

    MCAPI bool _isItemsTabVisible() const;

    MCAPI bool _isRecipeIngredientSelected(::std::string const& collectionName, int collectionIndex) const;

    MCAPI bool _isRecipeLocked(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void _loadPlayerOptions();

    MCAPI void _refreshFilters(int tabIndex, bool forceRefresh);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerStateMachine();

    MCAPI void _savePlayerOptions();

    MCAPI void _selectRecipe(::std::string const& collectionName, int collectionIndex);

    MCAPI void _setIsFiltering(bool smeltableFilterOn);

    MCAPI void _setLeftSideTab(int tabIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& RECIPE_BOOK_COLLECTION_NAME();

    MCAPI static ::std::unordered_map<int, ::FurnaceScreenController::CategoryTabInfo> const& mCategoryTabs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId,
        ::HashedString const&                          recipeTag
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
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onEntered();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD bool $_isStillValid() const;

    MCAPI void $_handlePlaceAll(::std::string const& collectionName, int index);

    MCAPI void $_handlePlaceOne(::std::string const& collectionName, int index);

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI ::std::string $_getCollectionName(::UIPropertyBag* bag) const;

    MCAPI ::SlotData $_reevaluateSlotData(::SlotData&& slotData) const;

    MCAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    MCAPI bool $_shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const;

    MCAPI void $_handleSelectSlot(::std::string const& collectionName, int collectionIndex);

    MCAPI ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonBDescription();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);

    MCAPI bool $_isInCreativeContainer(::std::string const& containerName) const;

    MCAPI void $_sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
