#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemInstance;
class ItemStackBase;
class Recipes;
// clang-format on

class CreativeContainerController : public ::CraftingContainerController {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CreativeContainerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CreativeContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CreativeContainerController() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual int getBackgroundStyle(int, bool) const /*override*/;
#else // LL_PLAT_C
    virtual int getBackgroundStyle(int slot, bool) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const /*override*/;
#else // LL_PLAT_C
    virtual bool isItemFiltered(::Recipes const& item, ::ItemStackBase const&) const /*override*/;
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit CreativeContainerController(::std::shared_ptr<::ContainerModel> containerModel);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::shared_ptr<::ContainerModel> containerModel);
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
    MCAPI int $getBackgroundStyle(int slot, bool) const;

    MCAPI bool $isItemFiltered(::Recipes const& item, ::ItemStackBase const&) const;

    MCFOLD ::ItemInstance const& $getRecipeItem(int index) const;

    MCFOLD bool $canRemove(int slot, int removeCount) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
