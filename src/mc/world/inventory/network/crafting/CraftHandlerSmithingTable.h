#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class CraftingContainer;
class ItemStackRequestActionCraftBase;
class Player;
class Recipe;
class Recipes;
// clang-format on

class CraftHandlerSmithingTable : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerSmithingTable& operator=(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerSmithingTable() /*override*/;

    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;

    virtual ::Recipes const* _getLevelRecipes() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _recipeMatches(::Recipe const& recipe, ::CraftingContainer& currentCraftingItems) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::Recipes const* $_getLevelRecipes() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
