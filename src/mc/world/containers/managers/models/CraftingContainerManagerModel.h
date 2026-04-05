#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/containers/models/FilterResult.h"
#include "mc/world/containers/models/TextSearchMode.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/crafting/RecipeIngredientSet.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ContainerScreenContext;
class CreativeItemGroupCategory;
class FilteredContainerModel;
class ItemStack;
class Player;
// clang-format on

class CraftingContainerManagerModel : public ::ContainerManagerModel {
public:
    // CraftingContainerManagerModel inner types define
    using FilterFunction = ::std::function<::FilterResult(::ItemInstance const&, bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                 mWorkbench;
    ::ll::TypedStorage<1, 1, bool>                                 mPocket;
    ::ll::TypedStorage<1, 1, bool>                                 mCraftableFilterOn;
    ::ll::TypedStorage<8, 32, ::std::string>                       mSearchString;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCaseFoldedSearchString;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mInventoryContainerModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mCraftingInputContainerModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mHotbarContainerModel;
    ::ll::TypedStorage<8, 64, ::RecipeIngredientSet>               mIngredientSet;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                     mLastCraftedItem;
    ::ll::TypedStorage<4, 4, int>                                  mContainerPopulationTabIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationGroupIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationGroupItemIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationItemIndex;
    ::ll::TypedStorage<8, 8, uint64>                               mContainerPopulationTotalItemCount;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingContainerManagerModel();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CraftingContainerManagerModel() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CraftingContainerManagerModel() /*override*/;
#endif

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int, ::ItemStack const&, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int) const /*override*/;

    virtual void setData(int, int) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual bool tick() /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CraftingContainerManagerModel(
        ::ContainerID        containerId,
        ::Player&            player,
        bool                 workbench,
        bool                 pocket,
        bool                 craftableFilterOn,
        ::BlockPos const&    pos,
        ::std::string const& inventorySearch
    );

    MCAPI ::std::shared_ptr<::FilteredContainerModel> _createContainerModel(
        ::ContainerEnumName                                          containerEnumName,
        ::CreativeItemGroupCategory* const                           category,
        bool                                                         doExpando,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
    );

    MCAPI ::std::shared_ptr<::FilteredContainerModel> _createContainerModel(
        ::ContainerEnumName                                          containerEnumName,
        ::std::vector<::ItemInstance> const&                         itemInstanceVector,
        bool                                                         doExpando,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
    );

    MCAPI ::FilterResult _filterByInventory(::ItemInstance const& item, bool includeCursorItem) const;

    MCAPI ::FilterResult _filterByText(::ItemInstance const& item, ::TextSearchMode searchMode) const;

    MCAPI bool _foundInStartOfAnyWord(::std::string const& itemName) const;

    MCAPI bool _hasUnlockedRecipes(::ItemInstance const& item) const;

    MCAPI bool _populateContainers(uint64& count);

    MCFOLD void fireItemAcquiredEvent(::ItemInstance const& itemInstance, int count);

    MCAPI ::std::vector<::std::string> const getCraftingTags() const;

    MCAPI bool hasIngredientSetChanged(::ItemStack const& inHand);

    MCAPI void setIsFiltering(bool craftableFilterOn);

    MCAPI void setSearchString(::std::string const& searchString);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::ContainerID        containerId,
        ::Player&            player,
        bool                 workbench,
        bool                 pocket,
        bool                 craftableFilterOn,
        ::BlockPos const&    pos,
        ::std::string const& inventorySearch
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::std::vector<::ItemStack> $getItemCopies() const;

    MCFOLD void $setSlot(int, ::ItemStack const&, bool);

    MCFOLD ::ItemStack const& $getSlot(int) const;

    MCFOLD void $setData(int, int);

    MCFOLD void $broadcastChanges();

    MCAPI bool $isValid(float pickRange);

    MCAPI bool $tick();

    MCAPI ::ContainerScreenContext $_postInit();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
