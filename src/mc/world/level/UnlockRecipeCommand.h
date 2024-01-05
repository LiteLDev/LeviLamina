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
    // vIndex: 0, symbol: __gen_??1UnlockRecipeCommand@@UEAA@XZ
    virtual ~UnlockRecipeCommand() = default;

    // vIndex: 2, symbol: ?execute@UnlockRecipeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@UnlockRecipeCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleAllRecipes@UnlockRecipeCommand@@AEBAXAEAVCommandOutput@@AEBV?$CommandSelectorResults@VPlayer@@@@@Z
    MCAPI void _handleAllRecipes(class CommandOutput&, class CommandSelectorResults<class Player> const&) const;

    // symbol:
    // ?_handleSpecificRecipe@UnlockRecipeCommand@@AEBAXAEAVCommandOutput@@AEBV?$CommandSelectorResults@VPlayer@@@@AEBVRecipes@@@Z
    MCAPI void
    _handleSpecificRecipe(class CommandOutput&, class CommandSelectorResults<class Player> const&, class Recipes const&)
        const;

    // NOLINTEND
};
