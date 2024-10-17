#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapExtendingRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    MapExtendingRecipe& operator=(MapExtendingRecipe const&);
    MapExtendingRecipe(MapExtendingRecipe const&);
    MapExtendingRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapExtendingRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext& craftingContext) const;

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

    MCAPI MapExtendingRecipe(std::string const& recipeId, class mce::UUID const& id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updateMapInstance(class ItemInstance& mapInstance, class CraftingContext& craftingContext) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& recipeId, class mce::UUID const& id);

    MCAPI std::vector<class ItemInstance> const&
          assemble$(class CraftingContainer& craftSlots, class CraftingContext& craftingContext) const;

    MCAPI int getCraftingSize$() const;

    MCAPI class RecipeIngredient const& getIngredient$(int x, int y) const;

    MCAPI std::vector<class ItemInstance> const& getResultItems$() const;

    MCAPI bool matches$(class CraftingContainer const& craftSlots, class CraftingContext const& craftingContext) const;

    MCAPI int size$() const;

    MCAPI static class mce::UUID const& CartographyTableID();

    MCAPI static class mce::UUID const& CraftingTableID();

    // NOLINTEND
};
