#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class DialogueCommand : public ::Command {
public:
    // DialogueCommand inner types define
    enum class Action : int {
        Open   = 0,
        Change = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DialogueCommand::Action>     mAction;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>  mNPCTarget;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mPlayerTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                mSceneName;
    ::ll::TypedStorage<1, 1, bool>                          mHasPlayers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~DialogueCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DialogueCommand();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
