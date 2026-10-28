#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class FurnaceContainerManagerModel;
class HashedString;
class ItemStack;
class ItemStackBase;
struct AutoPlaceItem;
struct ItemStateData;
struct SelectedSlotInfo;
// clang-format on

class FurnaceContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::FurnaceContainerManagerModel>> mFurnaceContainerManagerModel;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const>                        mIngredientName;
    ::ll::TypedStorage<1, 1, bool>                                             mClearInputGridOnChange;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStateData>>                  mSavedInventoryState;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                mCreativeItemOutputSlot;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mOutputName;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                 mSelectedRecipe;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FurnaceContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~FurnaceContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FurnaceContainerManagerController() /*override*/;
#endif

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

#ifdef LL_PLAT_S
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void _onItemAcquired(::ItemInstance const& itemInstance, ::SlotData const& srcSlot) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI FurnaceContainerManagerController(
        ::std::weak_ptr<::FurnaceContainerManagerModel> containerManagerModel,
        ::HashedString const&                           recipeTag
    );

    MCNAPI ::ItemInstance _getItemByIngredient(::ItemStack const& ingredient) const;

    MCNAPI void clearAllRecipes();

    MCNAPI void clearGhostRecipe(::ContainerEnumName container, int slot);

    MCNAPI void
    evacuateContainerToInventory(::ContainerController* container, ::std::vector<::AutoPlaceItem> const& autoPlace);

    MCNAPI void evacuateResultToInventory(::std::vector<::AutoPlaceItem> const& autoPlace);

    MCNAPI int getBackgroundStyle(::std::string const& containerName, int collectionIndex) const;

    MCNAPI int getBurnProgress(int max);

    MCNAPI ::std::string const& getExpandoItemGroupName(::std::string const& collectionName, int collectionIndex);

    MCNAPI int getLitProgress(int max);

    MCNAPI ::std::string const& getSearchString() const;

    MCNAPI void handleRecipeSelect(
        ::std::string const&                  collectionName,
        int                                   collectionIndex,
        bool                                  displayOnly,
        ::std::vector<::AutoPlaceItem> const& autoPlace
    );

    MCNAPI void handleRecipeUnselect();

    MCNAPI bool isCreativeContainer(::std::string const& containerName) const;

    MCNAPI bool isExpandableItemFiltered(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI bool isRecipeContainer(::std::string const& containerName) const;

    MCNAPI bool isRecipeIngredient(
        ::std::string const&   collectionName,
        int                    collectionIndex,
        ::ItemStackBase const& ingredient
    ) const;

    MCNAPI bool isTakeableContainer(::std::string const& containerName) const;

    MCNAPI void registerOnIngredientOrResultChangedCallback(
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> ingredientCallback,
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> resultCallback
    );

    MCNAPI void setSelectedRecipe(::ItemInstance const& item);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(::std::weak_ptr<::FurnaceContainerManagerModel> containerManagerModel, ::HashedString const& recipeTag);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $_onItemAcquired(::ItemInstance const& itemInstance, ::SlotData const& srcSlot);
#endif


    // NOLINTEND
};
