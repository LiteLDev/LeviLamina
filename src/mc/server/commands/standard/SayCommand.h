#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class SayCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    SayCommand& operator=(SayCommand const&);
    SayCommand(SayCommand const&);
    SayCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SayCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _sendMessage(
        std::string const&                  message,
        std::string const&                  sender,
        struct CommandOriginIdentity const& identity,
        class Level&                        level
    );

    MCAPI static bool
    _trySendSayCommandEvent(class Player const& player, class Level& level, std::string const& message);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
