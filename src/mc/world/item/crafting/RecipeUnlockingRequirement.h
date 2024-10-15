#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RecipeUnlockingRequirement {
public:
    // RecipeUnlockingRequirement inner types define
    enum class UnlockingContext {};

public:
    // prevent constructor by default
    RecipeUnlockingRequirement& operator=(RecipeUnlockingRequirement const&);
    RecipeUnlockingRequirement(RecipeUnlockingRequirement const&);

public:
    // NOLINTBEGIN
    MCAPI RecipeUnlockingRequirement();

    MCAPI explicit RecipeUnlockingRequirement(std::vector<class RecipeIngredient> unlockingIngredients);

    MCAPI bool canBeUnlockedByContext(::RecipeUnlockingRequirement::UnlockingContext context) const;

    MCAPI bool canBeUnlockedByIngredient(class RecipeIngredient const& ingredient) const;

    MCAPI bool isUnlockable() const;

    MCAPI ~RecipeUnlockingRequirement();

    MCAPI static ::RecipeUnlockingRequirement::UnlockingContext unlockingContextFromString(std::string const& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::vector<class RecipeIngredient> unlockingIngredients);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
