#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class EntityContext;
class Level;
class Player;
struct CommandOriginIdentity;
// clang-format on

class TellCommand : public ::MessagingCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<8, 32, ::CommandMessage>             mMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _sendEvent(
        ::Level&                              level,
        ::std::string const&                  sender,
        ::std::vector<::EntityContext> const& targets,
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage
    );

    MCAPI static void _sendMessageToPlayer(
        ::Player&                            player,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 sender,
        ::CommandOriginIdentity const&       identity,
        ::Level&                             level
    );

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND
};
