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
    // vIndex: 0
    virtual ~CreativeContainerController() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
