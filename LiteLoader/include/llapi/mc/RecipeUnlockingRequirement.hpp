/**
 * @file  RecipeUnlockingRequirement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RecipeUnlockingRequirement {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPEUNLOCKINGREQUIREMENT
public:
    class RecipeUnlockingRequirement& operator=(class RecipeUnlockingRequirement const &) = delete;
    RecipeUnlockingRequirement(class RecipeUnlockingRequirement const &) = delete;
#endif

public:
    /**
     * @symbol ??0RecipeUnlockingRequirement\@\@QEAA\@XZ
     */
    MCAPI RecipeUnlockingRequirement();
    /**
     * @symbol ??0RecipeUnlockingRequirement\@\@QEAA\@V?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI RecipeUnlockingRequirement(std::vector<class RecipeIngredient>);
    /**
     * @symbol ??0RecipeUnlockingRequirement\@\@QEAA\@W4UnlockingContext\@0\@\@Z
     */
    MCAPI RecipeUnlockingRequirement(enum class RecipeUnlockingRequirement::UnlockingContext);
    /**
     * @symbol ?isValid\@RecipeUnlockingRequirement\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??1RecipeUnlockingRequirement\@\@QEAA\@XZ
     */
    MCAPI ~RecipeUnlockingRequirement();
    /**
     * @symbol ?unlockingContextFromString\@RecipeUnlockingRequirement\@\@SA?AW4UnlockingContext\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class RecipeUnlockingRequirement::UnlockingContext unlockingContextFromString(std::string const &);

};
