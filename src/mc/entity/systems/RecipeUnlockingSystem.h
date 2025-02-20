#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class Recipes;
class ServerPlayer;
class StrictEntityContext;
class UnlockedRecipesServerComponent;
struct ServerPlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

class RecipeUnlockingSystem {
public:
    // RecipeUnlockingSystem inner types declare
    // clang-format off
    struct InventoryChangedData;
    // clang-format on

    // RecipeUnlockingSystem inner types define
    struct InventoryChangedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk54225a;
        ::ll::UntypedStorage<8, 8>  mUnk864952;
        // NOLINTEND

    public:
        // prevent constructor by default
        InventoryChangedData& operator=(InventoryChangedData const&);
        InventoryChangedData(InventoryChangedData const&);
        InventoryChangedData();
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _handleCriterionUnlocks(::ServerPlayer* serverPlayer, ::UnlockedRecipesServerComponent& unlockedComp);

    MCAPI static void
    _handleInitialUnlocks(::ServerPlayer* serverPlayer, ::UnlockedRecipesServerComponent& unlockedComp);

    MCAPI static void
    _handleInstructionUnlocks(::ServerPlayer* serverPlayer, ::UnlockedRecipesServerComponent& unlockedComp);

    MCAPI static void _tick(::ViewT<
                            ::StrictEntityContext,
                            ::Include<::ServerPlayerComponent>,
                            ::UnlockedRecipesServerComponent,
                            ::ActorOwnerComponent> view);

    MCAPI static ::std::vector<::std::string> _unlockRecipes(
        ::UnlockedRecipesServerComponent&                                     unlockedComp,
        ::Recipes const&                                                      recipes,
        bool                                                                  playerIsInWater,
        ::std::optional<::RecipeUnlockingSystem::InventoryChangedData> const& inventoryChanged
    );

    MCAPI static void _useContext(
        ::UnlockedRecipesServerComponent&              unlockedComp,
        ::Recipes const&                               recipes,
        ::RecipeUnlockingRequirement::UnlockingContext context,
        ::std::vector<::std::string>&                  unlockedRecipeIds
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
