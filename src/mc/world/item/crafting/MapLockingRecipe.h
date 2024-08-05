#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapLockingRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    MapLockingRecipe& operator=(MapLockingRecipe const&);
    MapLockingRecipe(MapLockingRecipe const&);
    MapLockingRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapLockingRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2
    virtual int getCraftingSize() const;

    // vIndex: 3
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6
    virtual int size() const;

    // vIndex: 8
    virtual std::vector<class ItemInstance> const& getResultItems() const;

    MCAPI MapLockingRecipe(std::string const&, class mce::UUID const&);

    MCAPI static class mce::UUID const CartographyTableID;

    // NOLINTEND
};
