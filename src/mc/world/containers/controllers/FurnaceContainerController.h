#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
// clang-format on

class FurnaceContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mRecipeItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mGhostItem;
    ::ll::TypedStorage<1, 1, bool>             mDisplayOnlyGhostItems;
    ::ll::TypedStorage<1, 1, bool>             mIsRecipeSmeltable;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FurnaceContainerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceContainerController() /*override*/ = default;

    virtual ::ItemInstance const& getRecipeItem(int) const /*override*/;

    virtual void onRecipeSelected(::ItemInstance const& recipeItem, bool displayGhostItems);

    virtual void setGhostItem(::ItemInstance const& item);

    virtual ::ItemInstance const& getGhostItem() const;

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI FurnaceContainerController(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::ItemInstance const& $getRecipeItem(int) const;

    MCAPI void $onRecipeSelected(::ItemInstance const& recipeItem, bool displayGhostItems);

    MCAPI void $setGhostItem(::ItemInstance const& item);

    MCFOLD ::ItemInstance const& $getGhostItem() const;

    MCAPI int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;
#endif


    // NOLINTEND
};
