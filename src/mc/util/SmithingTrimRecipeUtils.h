#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CraftingContext;
class ItemStack;
class Level;
class RecipeIngredient;
// clang-format on

namespace SmithingTrimRecipeUtils {
// functions
// NOLINTBEGIN
MCAPI bool doesItemHaveResultingTrim(
    ::CraftingContext const& craftingContext,
    ::ItemStack const&       item,
    ::std::string const&     templateName,
    ::std::string const&     materialName
);

MCAPI bool
validateAdditionIngredient(::Level const& level, ::RecipeIngredient additionIngredient, ::std::string const& recipeId);

MCAPI bool
validateTemplateIngredient(::Level const& level, ::RecipeIngredient templateIngredient, ::std::string const& recipeId);
// NOLINTEND

} // namespace SmithingTrimRecipeUtils
