#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class AbilityCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                mAbilityName;
    ::ll::TypedStorage<1, 1, bool>                          mValue;
    ::ll::TypedStorage<1, 1, bool>                          mHaveValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static void setup(::CommandRegistry& registry);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
