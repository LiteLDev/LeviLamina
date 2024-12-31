#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class Player;
struct CommandOriginIdentity;
// clang-format on

class TellCommand : public ::MessagingCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnke66298;
    ::ll::UntypedStorage<8, 24>  mUnk69ded5;
    // NOLINTEND

public:
    // prevent constructor by default
    TellCommand& operator=(TellCommand const&);
    TellCommand(TellCommand const&);
    TellCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~TellCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _sendMessageToPlayer(
        ::Player&                      player,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           sender,
        ::CommandOriginIdentity const& identity,
        ::Level&                       level
    );

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
