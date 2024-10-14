#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class TellCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    TellCommand& operator=(TellCommand const&);
    TellCommand(TellCommand const&);
    TellCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TellCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _sendMessageToPlayer(
        class Player&                       player,
        std::string const&                  message,
        std::string const&                  sender,
        struct CommandOriginIdentity const& identity,
        class Level&                        level
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
