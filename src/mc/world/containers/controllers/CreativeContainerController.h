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
    virtual ~CreativeContainerController() /*override*/ = default;

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const /*override*/;

    virtual ::ItemInstance const& getRecipeItem(int index) const /*override*/;

    virtual bool canRemove(int slot, int removeCount) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;

    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const;

    MCNAPI ::ItemInstance const& $getRecipeItem(int index) const;

    MCNAPI bool $canRemove(int slot, int removeCount) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
