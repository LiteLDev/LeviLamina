#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShapedRecipe : public ::Recipe {
public:
    // prevent constructor by default
    ShapedRecipe& operator=(ShapedRecipe const&);
    ShapedRecipe(ShapedRecipe const&);
    ShapedRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShapedRecipe();

    // vIndex: 1
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;

    // vIndex: 2
    virtual int getCraftingSize() const;

    // vIndex: 3
    virtual class RecipeIngredient const& getIngredient(int x, int y) const;

    // vIndex: 4
    virtual bool isShapeless() const;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6
    virtual int size() const;

    MCAPI ShapedRecipe(struct Recipe::ConstructionContext&&, int, int, bool);

    MCAPI bool assumeSymmetry() const;

    MCAPI uint64 getIngredientsHashOffset(int, int, int offsetX, int offsetY) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool matches(class CraftingContainer const& craftSlots, int xOffs, int yOffs, bool xFlip) const;

    // NOLINTEND
};
