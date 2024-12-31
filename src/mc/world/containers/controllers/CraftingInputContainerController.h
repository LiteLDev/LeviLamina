#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
// clang-format on

class CraftingInputContainerController : public ::CraftingContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb0aecb;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingInputContainerController& operator=(CraftingInputContainerController const&);
    CraftingInputContainerController(CraftingInputContainerController const&);
    CraftingInputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingInputContainerController() /*override*/ = default;

    // vIndex: 5
    virtual int getBackgroundStyle(int, bool) const /*override*/;

    // vIndex: 1
    virtual ::ItemInstance const& getRecipeItem(int) const /*override*/;

    // vIndex: 11
    virtual void clearSelectedRecipe() /*override*/;
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
