/**
 * @file  RecipeUnlockingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RecipeUnlockingRequirement.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RecipeUnlockingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPEUNLOCKINGSYSTEM
public:
    class RecipeUnlockingSystem& operator=(class RecipeUnlockingSystem const &) = delete;
    RecipeUnlockingSystem(class RecipeUnlockingSystem const &) = delete;
    RecipeUnlockingSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@RecipeUnlockingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//protected:
    /**
     * @symbol ?_hasRecipesLeftToUnlock\@RecipeUnlockingSystem\@\@KA_NAEBVRecipes\@\@AEBVUnlockedRecipesServerComponent\@\@\@Z
     */
    MCAPI static bool _hasRecipesLeftToUnlock(class Recipes const &, class UnlockedRecipesServerComponent const &);
    /**
     * @symbol ?_unlockRecipes\@RecipeUnlockingSystem\@\@KA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVUnlockedRecipesServerComponent\@\@AEBVRecipes\@\@_NAEBV?$optional\@UInventoryChangedData\@RecipeUnlockingSystem\@\@\@3\@\@Z
     */
    MCAPI static std::vector<std::string> _unlockRecipes(class UnlockedRecipesServerComponent &, class Recipes const &, bool, class std::optional<struct RecipeUnlockingSystem::InventoryChangedData> const &);
    /**
     * @symbol ?_useContext\@RecipeUnlockingSystem\@\@KAXAEAVUnlockedRecipesServerComponent\@\@AEBVRecipes\@\@W4UnlockingContext\@RecipeUnlockingRequirement\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void _useContext(class UnlockedRecipesServerComponent &, class Recipes const &, enum class RecipeUnlockingRequirement::UnlockingContext, std::vector<std::string> &);

//private:
    /**
     * @symbol ?_handleCriterionUnlocks\@RecipeUnlockingSystem\@\@CAXPEAVServerPlayer\@\@AEAVUnlockedRecipesServerComponent\@\@\@Z
     */
    MCAPI static void _handleCriterionUnlocks(class ServerPlayer *, class UnlockedRecipesServerComponent &);
    /**
     * @symbol ?_handleInitialUnlocks\@RecipeUnlockingSystem\@\@CAXPEAVServerPlayer\@\@AEAVUnlockedRecipesServerComponent\@\@\@Z
     */
    MCAPI static void _handleInitialUnlocks(class ServerPlayer *, class UnlockedRecipesServerComponent &);
    /**
     * @symbol ?_handleInstructionUnlocks\@RecipeUnlockingSystem\@\@CAXPEAVServerPlayer\@\@AEAVUnlockedRecipesServerComponent\@\@\@Z
     */
    MCAPI static void _handleInstructionUnlocks(class ServerPlayer *, class UnlockedRecipesServerComponent &);
    /**
     * @symbol ?_tick\@RecipeUnlockingSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UServerPlayerComponentFlag\@\@\@\@\@\@VUnlockedRecipesServerComponent\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ServerPlayerComponentFlag>>, class UnlockedRecipesServerComponent, class ActorOwnerComponent>);

protected:

private:

};
