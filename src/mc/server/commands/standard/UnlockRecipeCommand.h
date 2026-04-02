#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
class Recipes;
// clang-format on

class UnlockRecipeCommand : public ::Command {
public:
    // UnlockRecipeCommand inner types define
    enum class RecipeAction : int {
        Give = 0,
        Take = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UnlockRecipeCommand::RecipeAction> mAction;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>       mPlayers;
    ::ll::TypedStorage<8, 32, ::std::string>                      mRecipe;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~UnlockRecipeCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleAllRecipes(::CommandOutput& output, ::CommandSelectorResults<::Player> const& players) const;

    MCAPI void _handleSpecificRecipe(
        ::CommandOutput&                          output,
        ::CommandSelectorResults<::Player> const& players,
        ::Recipes const&                          recipes
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
