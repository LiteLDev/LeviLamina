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
    ::ll::UntypedStorage<8, 8>  mUnk830a7e;
    ::ll::UntypedStorage<4, 4>  mUnk91b314;
    ::ll::UntypedStorage<1, 1>  mUnk2398ce;
    ::ll::UntypedStorage<8, 24> mUnk897a0f;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainerController& operator=(CraftingContainerController const&);
    CraftingContainerController(CraftingContainerController const&);
    CraftingContainerController();

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
