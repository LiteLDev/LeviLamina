#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class Recipe;
// clang-format on

class CraftingOutputContainerController : public ::CraftingContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mRecipeItem;
    ::ll::TypedStorage<1, 1, bool>             mIsRecipeCraftable;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingOutputContainerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CraftingOutputContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CraftingOutputContainerController() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual int getBackgroundStyle(int, bool) const /*override*/;
#else // LL_PLAT_C
    virtual int getBackgroundStyle(int slot, bool) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void onRecipeSelected(::Recipe const*, uint64, bool) /*override*/;
#else // LL_PLAT_C
    virtual void onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems) /*override*/;
#endif

    virtual ::ItemInstance const& getRecipeItem(int) const /*override*/;

    virtual void clearSelectedRecipe() /*override*/;

#ifdef LL_PLAT_S
    virtual bool _canRemove(int, int) const /*override*/;
#else // LL_PLAT_C
    virtual bool _canRemove(int modelSlot, int removeCount) const /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit CraftingOutputContainerController(::std::shared_ptr<::ContainerModel> containerModel);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::shared_ptr<::ContainerModel> containerModel);
#endif
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
    MCNAPI int $getBackgroundStyle(int slot, bool) const;

    MCNAPI void $onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    MCNAPI ::ItemInstance const& $getRecipeItem(int) const;

    MCNAPI void $clearSelectedRecipe();

    MCNAPI bool $_canRemove(int modelSlot, int removeCount) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
