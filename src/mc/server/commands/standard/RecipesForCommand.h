#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class RecipesForCommand : public ::Command {
public:
    // RecipesForCommand inner types declare
    // clang-format off
    struct FurnaceRecipe;
    // clang-format on

    // RecipesForCommand inner types define
    struct FurnaceRecipe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48>  mUnkb0eeeb;
        ::ll::UntypedStorage<8, 128> mUnkb274ac;
        ::ll::UntypedStorage<8, 128> mUnk999f6d;
        // NOLINTEND

    public:
        // prevent constructor by default
        FurnaceRecipe& operator=(FurnaceRecipe const&);
        FurnaceRecipe(FurnaceRecipe const&);
        FurnaceRecipe();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb4d85c;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipesForCommand& operator=(RecipesForCommand const&);
    RecipesForCommand(RecipesForCommand const&);
    RecipesForCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~RecipesForCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
