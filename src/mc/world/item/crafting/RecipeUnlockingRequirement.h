#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/crafting/RecipeIngredient.h"

class RecipeUnlockingRequirement {
public:
    // RecipeUnlockingRequirement inner types define
    enum class UnlockingContext : int {
        None               = 0x0,
        AlwaysUnlocked     = 0x1,
        PlayerInWater      = 0x2,
        PlayerHasManyItems = 0x3,
    };

    enum class UnlockingRule : int {
        Invalid       = 0x0,
        ByIngredients = 0x1,
        ByContext     = 0x2,
    };

public:
    RecipeUnlockingRequirement::UnlockingRule    mRule;
    RecipeUnlockingRequirement::UnlockingContext mContext;
    std::vector<class RecipeIngredient>          mValidIngredients;

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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
