#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
class Recipes;
// clang-format on

class CreativeContainerController : public ::CraftingContainerController {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CreativeContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CreativeContainerController() /*override*/;
#endif

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const /*override*/;

    virtual ::ItemInstance const& getRecipeItem(int index) const /*override*/;

    virtual bool canRemove(int slot, int removeCount) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;

    MCAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const;

    MCAPI ::ItemInstance const& $getRecipeItem(int index) const;

    MCFOLD bool $canRemove(int slot, int removeCount) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
