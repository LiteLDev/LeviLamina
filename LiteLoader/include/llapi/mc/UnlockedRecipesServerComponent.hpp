/**
 * @file  UnlockedRecipesServerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RecipeUnlockingRequirement.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class UnlockedRecipesServerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNLOCKEDRECIPESSERVERCOMPONENT
public:
    class UnlockedRecipesServerComponent& operator=(class UnlockedRecipesServerComponent const &) = delete;
    UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0UnlockedRecipesServerComponent\@\@QEAA\@XZ
     */
    MCAPI UnlockedRecipesServerComponent();
    /**
     * @symbol ??0UnlockedRecipesServerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI UnlockedRecipesServerComponent(class UnlockedRecipesServerComponent &&);
    /**
     * @symbol ?addAdditionalSaveData\@UnlockedRecipesServerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?addUnlockedRecipe\@UnlockedRecipesServerComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addUnlockedRecipe(std::string const &);
    /**
     * @symbol ?clearUnlockingInstructions\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void clearUnlockingInstructions();
    /**
     * @symbol ?getUnlockedRecipes\@UnlockedRecipesServerComponent\@\@QEBAAEBV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> const & getUnlockedRecipes() const;
    /**
     * @symbol ?getUnlockingInstructions\@UnlockedRecipesServerComponent\@\@QEBAAEBV?$vector\@UUnlockingInstruction\@UnlockedRecipesServerComponent\@\@V?$allocator\@UUnlockingInstruction\@UnlockedRecipesServerComponent\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct UnlockedRecipesServerComponent::UnlockingInstruction> const & getUnlockingInstructions() const;
    /**
     * @symbol ?hasContextBeenUsed\@UnlockedRecipesServerComponent\@\@QEBA_NW4UnlockingContext\@RecipeUnlockingRequirement\@\@\@Z
     */
    MCAPI bool hasContextBeenUsed(enum class RecipeUnlockingRequirement::UnlockingContext) const;
    /**
     * @symbol ?hasInitialDataBeenSent\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasInitialDataBeenSent() const;
    /**
     * @symbol ?hasInventoryChanged\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasInventoryChanged() const;
    /**
     * @symbol ?hasUnlockedRecipes\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasUnlockedRecipes() const;
    /**
     * @symbol ?hasUnlockingInstructions\@UnlockedRecipesServerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasUnlockingInstructions() const;
    /**
     * @symbol ?isRecipeUnlocked\@UnlockedRecipesServerComponent\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isRecipeUnlocked(std::string const &) const;
    /**
     * @symbol ?markContextAsUsed\@UnlockedRecipesServerComponent\@\@QEAAXW4UnlockingContext\@RecipeUnlockingRequirement\@\@\@Z
     */
    MCAPI void markContextAsUsed(enum class RecipeUnlockingRequirement::UnlockingContext);
    /**
     * @symbol ?markInitialDataAsSent\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void markInitialDataAsSent();
    /**
     * @symbol ??4UnlockedRecipesServerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class UnlockedRecipesServerComponent & operator=(class UnlockedRecipesServerComponent &&);
    /**
     * @symbol ?readAdditionalSaveData\@UnlockedRecipesServerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?removeAllUnlockedRecipes\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void removeAllUnlockedRecipes();
    /**
     * @symbol ?removeUnlockedRecipe\@UnlockedRecipesServerComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeUnlockedRecipe(std::string const &);
    /**
     * @symbol ?resetUsedContexts\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void resetUsedContexts();
    /**
     * @symbol ?setInventoryChangedStatus\@UnlockedRecipesServerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setInventoryChangedStatus(bool);
    /**
     * @symbol ?COMPONENT_TAG\@UnlockedRecipesServerComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COMPONENT_TAG;
    /**
     * @symbol ?UNLOCKED_RECIPES_TAG\@UnlockedRecipesServerComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UNLOCKED_RECIPES_TAG;
    /**
     * @symbol ?USED_CONTEXTS_TAG\@UnlockedRecipesServerComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const USED_CONTEXTS_TAG;

};
