#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapUpgradingRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    MapUpgradingRecipe& operator=(MapUpgradingRecipe const&);
    MapUpgradingRecipe(MapUpgradingRecipe const&);
    MapUpgradingRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapUpgradingRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2
    virtual int getCraftingSize() const;

    // vIndex: 3
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const& craftingContext) const;

    // vIndex: 6
    virtual int size() const;

    // vIndex: 8
    virtual std::vector<class ItemInstance> const& getResultItems() const;

    MCAPI MapUpgradingRecipe(std::string const& recipeId, class mce::UUID const& uuid);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& recipeId, class mce::UUID const& uuid);

    MCAPI std::vector<class ItemInstance> const&
          assemble$(class CraftingContainer& craftSlots, class CraftingContext&) const;

    MCAPI int getCraftingSize$() const;

    MCAPI class RecipeIngredient const& getIngredient$(int x, int y) const;

    MCAPI std::vector<class ItemInstance> const& getResultItems$() const;

    MCAPI bool matches$(class CraftingContainer const& craftSlots, class CraftingContext const& craftingContext) const;

    MCAPI int size$() const;

    MCAPI static class mce::UUID const& CartographyTableID();

    MCAPI static class mce::UUID const& CraftingTableID();

    // NOLINTEND
};
