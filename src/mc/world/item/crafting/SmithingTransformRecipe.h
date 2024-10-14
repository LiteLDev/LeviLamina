#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class SmithingTransformRecipe : public ::ShapelessRecipe {
public:
    // prevent constructor by default
    SmithingTransformRecipe& operator=(SmithingTransformRecipe const&);
    SmithingTransformRecipe(SmithingTransformRecipe const&);
    SmithingTransformRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmithingTransformRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftingContainer, class CraftingContext&) const;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftingContainer, class CraftingContext const&) const;

    MCAPI SmithingTransformRecipe(
        std::string const&            recipeId,
        class RecipeIngredient const& templateIngredient,
        class RecipeIngredient const& baseIngredient,
        class RecipeIngredient const& additionIngredient,
        class Recipe::Results&&       results,
        class HashedString const&     tag
    );

    MCAPI class RecipeIngredient const& getAdditionIngredient() const;

    MCAPI class RecipeIngredient const& getBaseIngredient() const;

    MCAPI class ItemInstance const& getResult() const;

    MCAPI class RecipeIngredient const& getTemplateIngredient() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::vector<class ItemInstance> const&
          assemble$(class CraftingContainer& craftingContainer, class CraftingContext&) const;

    MCAPI bool matches$(class CraftingContainer const& craftingContainer, class CraftingContext const&) const;

    MCAPI static class mce::UUID const& ID();

    // NOLINTEND
};
