#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"
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
        InventoryChangedData& operator=(InventoryChangedData const&);
        InventoryChangedData(InventoryChangedData const&);
        InventoryChangedData();
    };

public:
    // prevent constructor by default
    RecipeUnlockingSystem& operator=(RecipeUnlockingSystem const&);
    RecipeUnlockingSystem(RecipeUnlockingSystem const&);
    RecipeUnlockingSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@RecipeUnlockingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol: ?isEnabled@RecipeUnlockingSystem@@SA_NAEBVLevel@@@Z
    MCAPI static bool isEnabled(class Level const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_unlockRecipes@RecipeUnlockingSystem@@KA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVUnlockedRecipesServerComponent@@AEBVRecipes@@_NAEBV?$optional@UInventoryChangedData@RecipeUnlockingSystem@@@3@@Z
    MCAPI static std::vector<std::string>
    _unlockRecipes(class UnlockedRecipesServerComponent&, class Recipes const&, bool, std::optional<struct RecipeUnlockingSystem::InventoryChangedData> const&);

    // symbol:
    // ?_useContext@RecipeUnlockingSystem@@KAXAEAVUnlockedRecipesServerComponent@@AEBVRecipes@@W4UnlockingContext@RecipeUnlockingRequirement@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI static void
    _useContext(class UnlockedRecipesServerComponent&, class Recipes const& recipes, ::RecipeUnlockingRequirement::UnlockingContext context, std::vector<std::string>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleCriterionUnlocks@RecipeUnlockingSystem@@CAXPEAVServerPlayer@@AEAVUnlockedRecipesServerComponent@@@Z
    MCAPI static void _handleCriterionUnlocks(class ServerPlayer* serverPlayer, class UnlockedRecipesServerComponent&);

    // symbol: ?_handleInitialUnlocks@RecipeUnlockingSystem@@CAXPEAVServerPlayer@@AEAVUnlockedRecipesServerComponent@@@Z
    MCAPI static void _handleInitialUnlocks(class ServerPlayer* serverPlayer, class UnlockedRecipesServerComponent&);

    // symbol:
    // ?_handleInstructionUnlocks@RecipeUnlockingSystem@@CAXPEAVServerPlayer@@AEAVUnlockedRecipesServerComponent@@@Z
    MCAPI static void
    _handleInstructionUnlocks(class ServerPlayer* serverPlayer, class UnlockedRecipesServerComponent&);

    // symbol:
    // ?_tick@RecipeUnlockingSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UServerPlayerComponentFlag@@@@@@VUnlockedRecipesServerComponent@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tick(class ViewT<
                            class StrictEntityContext,
                            struct Include<class FlagComponent<struct ServerPlayerComponentFlag>>,
                            class UnlockedRecipesServerComponent,
                            class ActorOwnerComponent> view);

    // NOLINTEND
};
