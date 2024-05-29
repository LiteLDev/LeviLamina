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
        // symbol: ??1UnlockingInstruction@UnlockedRecipesServerComponent@@QEAA@XZ
        MCAPI ~UnlockingInstruction();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    UnlockedRecipesServerComponent& operator=(UnlockedRecipesServerComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0UnlockedRecipesServerComponent@@QEAA@XZ
    MCAPI UnlockedRecipesServerComponent();

    // symbol: ??0UnlockedRecipesServerComponent@@QEAA@$$QEAV0@@Z
    MCAPI UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent&&);

    // symbol: ??0UnlockedRecipesServerComponent@@QEAA@AEBV0@@Z
    MCAPI UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent const&);

    // symbol: ?addAdditionalSaveData@UnlockedRecipesServerComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?addChangedInventorySlot@UnlockedRecipesServerComponent@@QEAAXH@Z
    MCAPI void addChangedInventorySlot(int);

    // symbol:
    // ?addUnlockedRecipe@UnlockedRecipesServerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addUnlockedRecipe(std::string const& recipeId);

    // symbol: ?addUnlockingInstruction@UnlockedRecipesServerComponent@@QEAAXUUnlockingInstruction@1@@Z
    MCAPI void addUnlockingInstruction(struct UnlockedRecipesServerComponent::UnlockingInstruction instruction);

    // symbol: ?clearChangedInventorySlots@UnlockedRecipesServerComponent@@QEAAXXZ
    MCAPI void clearChangedInventorySlots();

    // symbol: ?clearUnlockingInstructions@UnlockedRecipesServerComponent@@QEAAXXZ
    MCAPI void clearUnlockingInstructions();

    // symbol:
    // ?getChangedInventorySlots@UnlockedRecipesServerComponent@@QEBAAEBV?$unordered_set@HU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@H@2@@std@@XZ
    MCAPI std::unordered_set<int> const& getChangedInventorySlots() const;

    // symbol:
    // ?getUnlockedRecipes@UnlockedRecipesServerComponent@@QEBAAEBV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::unordered_set<std::string> const& getUnlockedRecipes() const;

    // symbol:
    // ?getUnlockingInstructions@UnlockedRecipesServerComponent@@QEBAAEBV?$vector@UUnlockingInstruction@UnlockedRecipesServerComponent@@V?$allocator@UUnlockingInstruction@UnlockedRecipesServerComponent@@@std@@@std@@XZ
    MCAPI std::vector<struct UnlockedRecipesServerComponent::UnlockingInstruction> const&
          getUnlockingInstructions() const;

    // symbol:
    // ?hasContextBeenUsed@UnlockedRecipesServerComponent@@QEBA_NW4UnlockingContext@RecipeUnlockingRequirement@@@Z
    MCAPI bool hasContextBeenUsed(::RecipeUnlockingRequirement::UnlockingContext context) const;

    // symbol: ?hasInitialDataBeenSent@UnlockedRecipesServerComponent@@QEBA_NXZ
    MCAPI bool hasInitialDataBeenSent() const;

    // symbol: ?hasInventoryChanged@UnlockedRecipesServerComponent@@QEBA_NXZ
    MCAPI bool hasInventoryChanged() const;

    // symbol: ?hasUnlockedRecipes@UnlockedRecipesServerComponent@@QEBA_NXZ
    MCAPI bool hasUnlockedRecipes() const;

    // symbol: ?hasUnlockingInstructions@UnlockedRecipesServerComponent@@QEBA_NXZ
    MCAPI bool hasUnlockingInstructions() const;

    // symbol:
    // ?isRecipeUnlocked@UnlockedRecipesServerComponent@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isRecipeUnlocked(std::string const& recipeId) const;

    // symbol: ?markContextAsUsed@UnlockedRecipesServerComponent@@QEAAXW4UnlockingContext@RecipeUnlockingRequirement@@@Z
    MCAPI void markContextAsUsed(::RecipeUnlockingRequirement::UnlockingContext context);

    // symbol: ?markInitialDataAsSent@UnlockedRecipesServerComponent@@QEAAXXZ
    MCAPI void markInitialDataAsSent();

    // symbol: ??4UnlockedRecipesServerComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class UnlockedRecipesServerComponent& operator=(class UnlockedRecipesServerComponent&&);

    // symbol:
    // ?readAdditionalSaveData@UnlockedRecipesServerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    // symbol: ?removeAllUnlockedRecipes@UnlockedRecipesServerComponent@@QEAAXXZ
    MCAPI void removeAllUnlockedRecipes();

    // symbol:
    // ?removeUnlockedRecipe@UnlockedRecipesServerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeUnlockedRecipe(std::string const& recipeId);

    // symbol: ?resetUsedContexts@UnlockedRecipesServerComponent@@QEAAXXZ
    MCAPI void resetUsedContexts();

    // symbol:
    // ?COMPONENT_TAG@UnlockedRecipesServerComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const COMPONENT_TAG;

    // symbol:
    // ?UNLOCKED_RECIPES_TAG@UnlockedRecipesServerComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const UNLOCKED_RECIPES_TAG;

    // symbol:
    // ?USED_CONTEXTS_TAG@UnlockedRecipesServerComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const USED_CONTEXTS_TAG;

    // NOLINTEND
};
