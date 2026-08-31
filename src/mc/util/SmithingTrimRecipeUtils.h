#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
class RecipeIngredient;
// clang-format on

namespace SmithingTrimRecipeUtils {
// functions
// NOLINTBEGIN
MCNAPI bool
validateAdditionIngredient(::Level const& level, ::RecipeIngredient additionIngredient, ::std::string const& recipeId);

MCNAPI bool validateBaseIngredient(::RecipeIngredient baseIngredient, ::std::string const& recipeId);

MCNAPI bool
validateTemplateIngredient(::Level const& level, ::RecipeIngredient templateIngredient, ::std::string const& recipeId);
// NOLINTEND

} // namespace SmithingTrimRecipeUtils
