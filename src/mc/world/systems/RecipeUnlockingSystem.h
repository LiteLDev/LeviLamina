#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

class RecipeUnlockingSystem {
public:
    // RecipeUnlockingSystem inner types declare
    // clang-format off
    struct InventoryChangedData;
    // clang-format on

    // RecipeUnlockingSystem inner types define
    struct InventoryChangedData {

    public:
        // prevent constructor by default
        InventoryChangedData& operator=(InventoryChangedData const&) = delete;
        InventoryChangedData(InventoryChangedData const&)            = delete;
        InventoryChangedData()                                       = delete;
    };

public:
    // prevent constructor by default
    RecipeUnlockingSystem& operator=(RecipeUnlockingSystem const&) = delete;
    RecipeUnlockingSystem(RecipeUnlockingSystem const&)            = delete;
    RecipeUnlockingSystem()                                        = delete;

public:
    /**
     * @symbol ?createSystem\@RecipeUnlockingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
    /**
     * @symbol ?isEnabled\@RecipeUnlockingSystem\@\@SA_NAEBVLevel\@\@\@Z
     */
    MCAPI static bool isEnabled(class Level const&); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_unlockRecipes\@RecipeUnlockingSystem\@\@KA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVUnlockedRecipesServerComponent\@\@AEBVRecipes\@\@_NAEBV?$optional\@UInventoryChangedData\@RecipeUnlockingSystem\@\@\@3\@\@Z
     */
    MCAPI static std::vector<std::string>
    _unlockRecipes(class UnlockedRecipesServerComponent&, class Recipes const&, bool, class std::optional<struct RecipeUnlockingSystem::InventoryChangedData> const&); // NOLINT
    /**
     * @symbol
     * ?_useContext\@RecipeUnlockingSystem\@\@KAXAEAVUnlockedRecipesServerComponent\@\@AEBVRecipes\@\@W4UnlockingContext\@RecipeUnlockingRequirement\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void
    _useContext(class UnlockedRecipesServerComponent&, class Recipes const&, enum class RecipeUnlockingRequirement::UnlockingContext, std::vector<std::string>&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_handleCriterionUnlocks\@RecipeUnlockingSystem\@\@CAXPEAVServerPlayer\@\@AEAVUnlockedRecipesServerComponent\@\@\@Z
     */
    MCAPI static void _handleCriterionUnlocks(class ServerPlayer*, class UnlockedRecipesServerComponent&); // NOLINT
    /**
     * @symbol
     * ?_handleInitialUnlocks\@RecipeUnlockingSystem\@\@CAXPEAVServerPlayer\@\@AEAVUnlockedRecipesServerComponent\@\@\@Z
     */
    MCAPI static void _handleInitialUnlocks(class ServerPlayer*, class UnlockedRecipesServerComponent&); // NOLINT
    /**
     * @symbol
     * ?_handleInstructionUnlocks\@RecipeUnlockingSystem\@\@CAXPEAVServerPlayer\@\@AEAVUnlockedRecipesServerComponent\@\@\@Z
     */
    MCAPI static void _handleInstructionUnlocks(class ServerPlayer*, class UnlockedRecipesServerComponent&); // NOLINT

protected:
private:
};
