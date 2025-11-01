#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
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
    ::ll::UntypedStorage<4, 4> mUnke2a9c8;
    ::ll::UntypedStorage<8, 200> mUnkebc694;
    ::ll::UntypedStorage<8, 32> mUnk1687d7;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlockRecipeCommand& operator=(UnlockRecipeCommand const&);
    UnlockRecipeCommand(UnlockRecipeCommand const&);
    UnlockRecipeCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~UnlockRecipeCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleAllRecipes(::CommandOutput& output, ::CommandSelectorResults<::Player> const& players) const;

    MCAPI void _handleSpecificRecipe(::CommandOutput& output, ::CommandSelectorResults<::Player> const& players, ::Recipes const& recipes) const;
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
