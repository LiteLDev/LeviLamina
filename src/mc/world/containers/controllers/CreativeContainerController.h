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
    // prevent constructor by default
    CreativeContainerController& operator=(CreativeContainerController const&);
    CreativeContainerController(CreativeContainerController const&);
    CreativeContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeContainerController() /*override*/;

    // vIndex: 5
    virtual int getBackgroundStyle(int, bool) const /*override*/;

    // vIndex: 4
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const /*override*/;

    // vIndex: 1
    virtual ::ItemInstance const& getRecipeItem(int) const /*override*/;

    // vIndex: 2
    virtual bool canRemove(int, int) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getBackgroundStyle(int, bool) const;

    MCAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    MCAPI ::ItemInstance const& $getRecipeItem(int) const;

    MCAPI bool $canRemove(int, int) const;
    // NOLINTEND
};
