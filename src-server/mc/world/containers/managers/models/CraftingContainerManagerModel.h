#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/containers/models/FilterResult.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/crafting/RecipeIngredientSet.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ContainerScreenContext;
class ItemStack;
// clang-format on

class CraftingContainerManagerModel : public ::ContainerManagerModel {
public:
    // CraftingContainerManagerModel inner types define
    using FilterFunction = ::std::function<::FilterResult(::ItemInstance const&, bool)>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<1, 1, bool> mWorkbench;
    ::ll::TypedStorage<1, 1, bool> mPocket;
    ::ll::TypedStorage<1, 1, bool> mFiltering;
    ::ll::TypedStorage<8, 32, ::std::string> mSearchString;
    ::ll::TypedStorage<8, 32, ::std::string> mCaseFoldedSearchString;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mInventoryContainerModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mCraftingInputContainerModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mHotbarContainerModel;
    ::ll::TypedStorage<8, 64, ::RecipeIngredientSet> mIngredientSet;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mLastCraftedItem;
    ::ll::TypedStorage<4, 4, int> mContainerPopulationTabIndex;
    ::ll::TypedStorage<8, 8, uint64> mContainerPopulationGroupIndex;
    ::ll::TypedStorage<8, 8, uint64> mContainerPopulationGroupItemIndex;
    ::ll::TypedStorage<8, 8, uint64> mContainerPopulationItemIndex;
    ::ll::TypedStorage<8, 8, uint64> mContainerPopulationTotalItemCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainerManagerModel() /*override*/ = default;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    // vIndex: 8
    virtual void setSlot(int, ::ItemStack const&, bool) /*override*/;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int) const /*override*/;

    // vIndex: 10
    virtual void setData(int, int) /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 19
    virtual bool isValid(float pickRange) /*override*/;

    // vIndex: 14
    virtual bool tick() /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
