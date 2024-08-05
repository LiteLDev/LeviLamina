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
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static bool isEnabled(class Level const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static std::vector<std::string>
    _unlockRecipes(class UnlockedRecipesServerComponent&, class Recipes const&, bool, std::optional<struct RecipeUnlockingSystem::InventoryChangedData> const&);

    MCAPI static void
    _useContext(class UnlockedRecipesServerComponent&, class Recipes const& recipes, ::RecipeUnlockingRequirement::UnlockingContext context, std::vector<std::string>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _handleCriterionUnlocks(class ServerPlayer* serverPlayer, class UnlockedRecipesServerComponent&);

    MCAPI static void _handleInitialUnlocks(class ServerPlayer* serverPlayer, class UnlockedRecipesServerComponent&);

    MCAPI static void
    _handleInstructionUnlocks(class ServerPlayer* serverPlayer, class UnlockedRecipesServerComponent&);

    MCAPI static void _tick(class ViewT<
                            class StrictEntityContext,
                            struct Include<class FlagComponent<struct ServerPlayerComponentFlag>>,
                            class UnlockedRecipesServerComponent,
                            class ActorOwnerComponent> view);

    // NOLINTEND
};
