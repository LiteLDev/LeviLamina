#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SmithingTrimRecipeUtils {
// NOLINTBEGIN
/**
 * @symbol
 * ?doesItemHaveResultingTrim\@SmithingTrimRecipeUtils\@\@YA_NAEBVCraftingContext\@\@AEBVItemStack\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2\@Z
 */
MCAPI bool
doesItemHaveResultingTrim(class CraftingContext const&, class ItemStack const&, std::string const&, std::string const&);
/**
 * @symbol
 * ?validateAdditionIngredient\@SmithingTrimRecipeUtils\@\@YA_NAEBVLevel\@\@VRecipeIngredient\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool validateAdditionIngredient(class Level const&, class RecipeIngredient, std::string const&);
/**
 * @symbol
 * ?validateBaseIngredient\@SmithingTrimRecipeUtils\@\@YA_NVRecipeIngredient\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool validateBaseIngredient(class RecipeIngredient, std::string const&);
/**
 * @symbol
 * ?validateTemplateIngredient\@SmithingTrimRecipeUtils\@\@YA_NAEBVLevel\@\@VRecipeIngredient\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool validateTemplateIngredient(class Level const&, class RecipeIngredient, std::string const&);
// NOLINTEND

}; // namespace SmithingTrimRecipeUtils
