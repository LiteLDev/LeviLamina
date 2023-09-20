/**
 * @file  unity_2134d14a75945ee3fb3c5378386fa526.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace unity_2134d14a75945ee3fb3c5378386fa526 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?makeShaped\@unity_2134d14a75945ee3fb3c5378386fa526\@\@YA?AV?$unique_ptr\@VShapedChemistryRecipe\@\@U?$default_delete\@VShapedChemistryRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@3\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@3\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI std::unique_ptr<class ShapedChemistryRecipe> makeShaped(std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *, class std::optional<class RecipeUnlockingRequirement>, class SemVersion const &);
    /**
     * @symbol ?makeShapeless\@unity_2134d14a75945ee3fb3c5378386fa526\@\@YA?AV?$unique_ptr\@VShapelessChemistryRecipe\@\@U?$default_delete\@VShapelessChemistryRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@3\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@3\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI std::unique_ptr<class ShapelessChemistryRecipe> makeShapeless(std::string, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *, class std::optional<class RecipeUnlockingRequirement>, class SemVersion const &);

};