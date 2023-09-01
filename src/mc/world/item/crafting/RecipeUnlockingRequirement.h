#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RecipeUnlockingRequirement {
public:
    // RecipeUnlockingRequirement inner types define
    enum class UnlockingContext {};

public:
    // prevent constructor by default
    RecipeUnlockingRequirement& operator=(RecipeUnlockingRequirement const&) = delete;
    RecipeUnlockingRequirement(RecipeUnlockingRequirement const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0RecipeUnlockingRequirement@@QEAA@W4UnlockingContext@0@@Z
    MCAPI RecipeUnlockingRequirement(::RecipeUnlockingRequirement::UnlockingContext);

    // symbol:
    // ??0RecipeUnlockingRequirement@@QEAA@V?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@@Z
    MCAPI RecipeUnlockingRequirement(std::vector<class RecipeIngredient>);

    // symbol: ??0RecipeUnlockingRequirement@@QEAA@XZ
    MCAPI RecipeUnlockingRequirement();

    // symbol: ?canBeUnlockedByContext@RecipeUnlockingRequirement@@QEBA_NW4UnlockingContext@1@@Z
    MCAPI bool canBeUnlockedByContext(::RecipeUnlockingRequirement::UnlockingContext) const;

    // symbol: ?canBeUnlockedByIngredient@RecipeUnlockingRequirement@@QEBA_NAEBVRecipeIngredient@@@Z
    MCAPI bool canBeUnlockedByIngredient(class RecipeIngredient const&) const;

    // symbol: ?isUnlockable@RecipeUnlockingRequirement@@QEBA_NXZ
    MCAPI bool isUnlockable() const;

    // symbol: ??1RecipeUnlockingRequirement@@QEAA@XZ
    MCAPI ~RecipeUnlockingRequirement();

    // symbol:
    // ?unlockingContextFromString@RecipeUnlockingRequirement@@SA?AW4UnlockingContext@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::RecipeUnlockingRequirement::UnlockingContext unlockingContextFromString(std::string const&);

    // NOLINTEND
};
