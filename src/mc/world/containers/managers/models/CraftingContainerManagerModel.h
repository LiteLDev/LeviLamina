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
    ::ll::TypedStorage<1, 1, bool>                                 mFiltering;
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

public:
    // prevent constructor by default
    CraftingContainerManagerModel();

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
    MCNAPI_C CraftingContainerManagerModel(
        ::ContainerID        containerId,
        ::Player&            player,
        bool                 workbench,
        bool                 pocket,
        bool                 filtering,
        ::BlockPos const&    pos,
        ::std::string const& inventorySearch
    );

    MCNAPI_C ::std::shared_ptr<::FilteredContainerModel> _createContainerModel(
        ::ContainerEnumName                                          containerEnumName,
        ::CreativeItemGroupCategory* const                           category,
        bool                                                         doExpando,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
    );

    MCNAPI_C ::std::shared_ptr<::FilteredContainerModel> _createContainerModel(
        ::ContainerEnumName                  containerEnumName,
        ::std::vector<::ItemInstance> const& itemInstanceVector,
        bool,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
    );

    MCNAPI_C ::FilterResult _filterByInventory(::ItemInstance const& item, bool includeCursorItem) const;

    MCNAPI_C ::FilterResult _filterByText(::ItemInstance const& item, ::TextSearchMode searchMode) const;

    MCNAPI_C bool _foundInStartOfAnyWord(::std::string const& itemName) const;

    MCNAPI_C bool _hasUnlockedRecipes(::ItemInstance const& item) const;

    MCNAPI_C bool _populateContainers(uint64& count);

    MCNAPI_C void fireItemAcquiredEvent(::ItemInstance const& itemInstance, int count);

    MCNAPI_C ::std::vector<::std::string> const getCraftingTags() const;

    MCNAPI_C bool hasIngredientSetChanged(::ItemStack const& inHand);

    MCNAPI_C void setIsFiltering(bool filtering);

    MCNAPI_C void setSearchString(::std::string const& searchString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::ContainerID        containerId,
        ::Player&            player,
        bool                 workbench,
        bool                 pocket,
        bool                 filtering,
        ::BlockPos const&    pos,
        ::std::string const& inventorySearch
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getSlot(int) const;

    MCNAPI void $setData(int, int);

    MCNAPI void $broadcastChanges();

    MCNAPI bool $isValid(float pickRange);

    MCNAPI bool $tick();

    MCNAPI ::ContainerScreenContext $_postInit();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
