#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SmithingTrimRecipeUtils {
// NOLINTBEGIN
MCAPI bool doesItemHaveResultingTrim(
    class CraftingContext const& craftingContext,
    class ItemStack const&       item,
    std::string const&           templateName,
    std::string const&           materialName
);

MCAPI bool validateAdditionIngredient(
    class Level const&     level,
    class RecipeIngredient additionIngredient,
    std::string const&     recipeId
);

MCAPI bool validateTemplateIngredient(
    class Level const&     level,
    class RecipeIngredient templateIngredient,
    std::string const&     recipeId
);
// NOLINTEND

}; // namespace SmithingTrimRecipeUtils
