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
     * @symbol ?markInventoryAsChanged\@UnlockedRecipesServerComponent\@\@QEAAXXZ
     */
    MCAPI void markInventoryAsChanged();
    /**
     * @symbol ??4UnlockedRecipesServerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class UnlockedRecipesServerComponent & operator=(class UnlockedRecipesServerComponent &&);
    /**
     * @symbol ?readAdditionalSaveData\@UnlockedRecipesServerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?updateRecipeUnlocking\@UnlockedRecipesServerComponent\@\@QEAAXPEAVServerPlayer\@\@\@Z
     */
    MCAPI void updateRecipeUnlocking(class ServerPlayer *);
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

//protected:
    /**
     * @symbol ?isRecipeUnlocked\@UnlockedRecipesServerComponent\@\@IEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isRecipeUnlocked(std::string const &) const;
    /**
     * @symbol ?unlockRecipes\@UnlockedRecipesServerComponent\@\@IEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVRecipes\@\@_NAEBV?$optional\@UInventoryChangedData\@UnlockedRecipesServerComponent\@\@\@3\@\@Z
     */
    MCAPI std::vector<std::string> unlockRecipes(class Recipes const &, bool, class std::optional<struct UnlockedRecipesServerComponent::InventoryChangedData> const &);
    /**
     * @symbol ?useContext\@UnlockedRecipesServerComponent\@\@IEAAXAEBVRecipes\@\@W4UnlockingContext\@RecipeUnlockingRequirement\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void useContext(class Recipes const &, enum class RecipeUnlockingRequirement::UnlockingContext, std::vector<std::string> &);

protected:

};
