#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class SmithingTrimRecipe : public ::ShapelessRecipe {
public:
    // prevent constructor by default
    SmithingTrimRecipe& operator=(SmithingTrimRecipe const&);
    SmithingTrimRecipe(SmithingTrimRecipe const&);
    SmithingTrimRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmithingTrimRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;

    // vIndex: 10
    virtual bool hasDataDrivenResult() const;

    MCAPI SmithingTrimRecipe(
        std::string const& recipeId,
        class RecipeIngredient const&,
        class RecipeIngredient const&,
        class RecipeIngredient const&,
        class HashedString const& tag
    );

    MCAPI class RecipeIngredient const& getAdditionIngredient() const;

    MCAPI class RecipeIngredient const& getBaseIngredient() const;

    MCAPI class RecipeIngredient const& getTemplateIngredient() const;

    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
