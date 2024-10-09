#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelectorResults.h"

class UnlockRecipeCommand : public ::Command {
public:
    // prevent constructor by default
    UnlockRecipeCommand& operator=(UnlockRecipeCommand const&);
    UnlockRecipeCommand(UnlockRecipeCommand const&);
    UnlockRecipeCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnlockRecipeCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _handleAllRecipes(class CommandOutput& output, class CommandSelectorResults<class Player> const& players) const;

    MCAPI void _handleSpecificRecipe(
        class CommandOutput&                              output,
        class CommandSelectorResults<class Player> const& players,
        class Recipes const&                              recipes
    ) const;

    // NOLINTEND
};
