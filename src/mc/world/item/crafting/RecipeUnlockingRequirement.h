#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RecipeIngredient;
// clang-format on

class RecipeUnlockingRequirement {
public:
    // RecipeUnlockingRequirement inner types define
    enum class UnlockingContext : int {
        None               = 0,
        AlwaysUnlocked     = 1,
        PlayerInWater      = 2,
        PlayerHasManyItems = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RecipeUnlockingRequirement::UnlockingContext> mContext;
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>>             mIngredients;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecipeUnlockingRequirement();

    MCAPI explicit RecipeUnlockingRequirement(::std::vector<::RecipeIngredient> unlockingIngredients);

    MCAPI bool canBeUnlockedByContext(::RecipeUnlockingRequirement::UnlockingContext context) const;

    MCAPI bool canBeUnlockedByIngredient(::RecipeIngredient const& ingredient) const;

    MCAPI bool isUnlockable() const;

    MCAPI ~RecipeUnlockingRequirement();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::RecipeUnlockingRequirement::UnlockingContext unlockingContextFromString(::std::string const& context
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::vector<::RecipeIngredient> unlockingIngredients);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
