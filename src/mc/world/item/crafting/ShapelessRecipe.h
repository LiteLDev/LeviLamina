#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShapelessRecipe : public ::Recipe {
public:
    // prevent constructor by default
    ShapelessRecipe& operator=(ShapelessRecipe const&);
    ShapelessRecipe(ShapelessRecipe const&);
    ShapelessRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShapelessRecipe();

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

    MCAPI explicit ShapelessRecipe(struct Recipe::ConstructionContext&& context);

    // NOLINTEND
};
