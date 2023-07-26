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
        UnlockingInstruction& operator=(UnlockingInstruction const&) = delete;
        UnlockingInstruction(UnlockingInstruction const&)            = delete;
        UnlockingInstruction()                                       = delete;

    public:
        /**
         * @symbol ??1UnlockingInstruction\@UnlockedRecipesServerComponent\@\@QEAA\@XZ
         */
        MCAPI ~UnlockingInstruction(); // NOLINT
    };

public:
    // prevent constructor by default
    UnlockedRecipesServerComponent& operator=(UnlockedRecipesServerComponent const&) = delete;

public:
    /**
     * @symbol ??0UnlockedRecipesServerComponent\@\@QEAA\@XZ
     */
    MCAPI UnlockedRecipesServerComponent(); // NOLINT
    /**
     * @symbol ??0UnlockedRecipesServerComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent const&); // NOLINT
    /**
     * @symbol ??0UnlockedRecipesServerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent&&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@UnlockedRecipesServerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?addChangedInventorySlot\@UnlockedRecipesServerComponent\@\@QEAAXH\@Z
     */
    MCAPI void addChangedInventorySlot(int); // NOLINT
    /**
     * @symbol
     * ?addUnlockedRecipe\@UnlockedRecipesServerComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addUnlockedRecipe(std::string const&); // NOLINT
    /**
     * @symbol ?addUnlockingInstruction\@UnlockedRecipesServerComponent\@\@QEAAXUUnlockingInstruction\@1\@\@Z
     */
    MCAPI void addUnlockingInstruction(struct UnlockedRecipesServerComponent::UnlockingInstruction); // NOLINT
    /**
     * @symbol ?clearChangedInventorySlots\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void clearChangedInventorySlots(); // NOLINT
    /**
     * @symbol ?clearUnlockingInstructions\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void clearUnlockingInstructions(); // NOLINT
    /**
     * @symbol
     * ?getChangedInventorySlots\@UnlockedRecipesServerComponent\@\@QEBAAEBV?$unordered_set\@HU?$hash\@H\@std\@\@U?$equal_to\@H\@2\@V?$allocator\@H\@2\@\@std\@\@XZ
     */
    MCAPI class std::
        unordered_set<int, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<int>> const&
        getChangedInventorySlots() const; // NOLINT
    /**
     * @symbol
     * ?getUnlockedRecipes\@UnlockedRecipesServerComponent\@\@QEBAAEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        std::string,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<std::string>> const&
    getUnlockedRecipes() const; // NOLINT
    /**
     * @symbol
     * ?getUnlockingInstructions\@UnlockedRecipesServerComponent\@\@QEBAAEBV?$vector\@UUnlockingInstruction\@UnlockedRecipesServerComponent\@\@V?$allocator\@UUnlockingInstruction\@UnlockedRecipesServerComponent\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct UnlockedRecipesServerComponent::UnlockingInstruction> const&
          getUnlockingInstructions() const; // NOLINT
    /**
     * @symbol
     * ?hasContextBeenUsed\@UnlockedRecipesServerComponent\@\@QEBA_NW4UnlockingContext\@RecipeUnlockingRequirement\@\@\@Z
     */
    MCAPI bool hasContextBeenUsed(enum class RecipeUnlockingRequirement::UnlockingContext) const; // NOLINT
    /**
     * @symbol ?hasInitialDataBeenSent\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasInitialDataBeenSent() const; // NOLINT
    /**
     * @symbol ?hasInventoryChanged\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasInventoryChanged() const; // NOLINT
    /**
     * @symbol ?hasUnlockedRecipes\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasUnlockedRecipes() const; // NOLINT
    /**
     * @symbol ?hasUnlockingInstructions\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasUnlockingInstructions() const; // NOLINT
    /**
     * @symbol
     * ?isRecipeUnlocked\@UnlockedRecipesServerComponent\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isRecipeUnlocked(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?markContextAsUsed\@UnlockedRecipesServerComponent\@\@QEAAXW4UnlockingContext\@RecipeUnlockingRequirement\@\@\@Z
     */
    MCAPI void markContextAsUsed(enum class RecipeUnlockingRequirement::UnlockingContext); // NOLINT
    /**
     * @symbol ?markInitialDataAsSent\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void markInitialDataAsSent(); // NOLINT
    /**
     * @symbol ??4UnlockedRecipesServerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class UnlockedRecipesServerComponent& operator=(class UnlockedRecipesServerComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@UnlockedRecipesServerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?removeAllUnlockedRecipes\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void removeAllUnlockedRecipes(); // NOLINT
    /**
     * @symbol
     * ?removeUnlockedRecipe\@UnlockedRecipesServerComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeUnlockedRecipe(std::string const&); // NOLINT
    /**
     * @symbol ?resetUsedContexts\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void resetUsedContexts(); // NOLINT
    /**
     * @symbol
     * ?COMPONENT_TAG\@UnlockedRecipesServerComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COMPONENT_TAG; // NOLINT
    /**
     * @symbol
     * ?UNLOCKED_RECIPES_TAG\@UnlockedRecipesServerComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UNLOCKED_RECIPES_TAG; // NOLINT
    /**
     * @symbol
     * ?USED_CONTEXTS_TAG\@UnlockedRecipesServerComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const USED_CONTEXTS_TAG; // NOLINT
};
