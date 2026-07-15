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

#ifdef LL_PLAT_S
    virtual int getBackgroundStyle(int, bool) const /*override*/;
#else // LL_PLAT_C
    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const /*override*/;
#else // LL_PLAT_C
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ItemInstance const& getRecipeItem(int) const /*override*/;
#else // LL_PLAT_C
    virtual ::ItemInstance const& getRecipeItem(int index) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool canRemove(int, int) const /*override*/;
#else // LL_PLAT_C
    virtual bool canRemove(int slot, int removeCount) const /*override*/;
#endif

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
