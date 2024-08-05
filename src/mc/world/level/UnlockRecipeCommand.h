#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/level/Command.h"

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
    MCAPI void _handleAllRecipes(class CommandOutput&, class CommandSelectorResults<class Player> const&) const;

    MCAPI void
    _handleSpecificRecipe(class CommandOutput&, class CommandSelectorResults<class Player> const&, class Recipes const&)
        const;

    // NOLINTEND
};
