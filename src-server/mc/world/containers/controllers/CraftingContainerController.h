#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class Recipe;
// clang-format on

class CraftingContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Recipe const*> mCurrentRecipe;
    ::ll::TypedStorage<4, 4, int> mGridSize;
    ::ll::TypedStorage<1, 1, bool> mDisplayOnlyGhostItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mGhostItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainerController() /*override*/ = default;

    // vIndex: 1
    virtual ::ItemInstance const& getRecipeItem(int) const = 0;

    // vIndex: 10
    virtual void onRecipeSelected(::Recipe const*, uint64, bool);

    // vIndex: 11
    virtual void clearSelectedRecipe();

    // vIndex: 12
    virtual ::Recipe const* getSelectedRecipe() const;

    // vIndex: 13
    virtual void setGhostItem(::ItemInstance const&, int, bool);

    // vIndex: 14
    virtual ::ItemInstance const& getGhostItem(int) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
