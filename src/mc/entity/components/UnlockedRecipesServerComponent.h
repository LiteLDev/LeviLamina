#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

class UnlockedRecipesServerComponent {
public:
    // UnlockedRecipesServerComponent inner types declare
    // clang-format off
    struct UnlockingInstruction;
    // clang-format on

    // UnlockedRecipesServerComponent inner types define
    struct UnlockingInstruction {
    public:
        // prevent constructor by default
        UnlockingInstruction& operator=(UnlockingInstruction const&);
        UnlockingInstruction(UnlockingInstruction const&);
        UnlockingInstruction();

    public:
        // NOLINTBEGIN
        MCAPI ~UnlockingInstruction();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    UnlockedRecipesServerComponent& operator=(UnlockedRecipesServerComponent const&);

public:
    // NOLINTBEGIN
    MCAPI UnlockedRecipesServerComponent();

    MCAPI UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent&&);

    MCAPI UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent const&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void addChangedInventorySlot(int slot);

    MCAPI void addUnlockedRecipe(std::string const& recipeId);

    MCAPI void addUnlockingInstruction(struct UnlockedRecipesServerComponent::UnlockingInstruction instruction);

    MCAPI void clearChangedInventorySlots();

    MCAPI void clearUnlockingInstructions();

    MCAPI std::unordered_set<int> const& getChangedInventorySlots() const;

    MCAPI std::unordered_set<std::string> const& getUnlockedRecipes() const;

    MCAPI std::vector<struct UnlockedRecipesServerComponent::UnlockingInstruction> const&
          getUnlockingInstructions() const;

    MCAPI bool hasContextBeenUsed(::RecipeUnlockingRequirement::UnlockingContext context) const;

    MCAPI bool hasInitialDataBeenSent() const;

    MCAPI bool hasInventoryChanged() const;

    MCAPI bool hasUnlockedRecipes() const;

    MCAPI bool hasUnlockingInstructions() const;

    MCAPI bool isRecipeUnlocked(std::string const& recipeId) const;

    MCAPI void markContextAsUsed(::RecipeUnlockingRequirement::UnlockingContext context);

    MCAPI void markInitialDataAsSent();

    MCAPI class UnlockedRecipesServerComponent& operator=(class UnlockedRecipesServerComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void removeAllUnlockedRecipes();

    MCAPI void removeUnlockedRecipe(std::string const& recipeId);

    MCAPI void resetUsedContexts();

    MCAPI static std::string const COMPONENT_TAG;

    MCAPI static std::string const UNLOCKED_RECIPES_TAG;

    MCAPI static std::string const USED_CONTEXTS_TAG;

    // NOLINTEND
};
