#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class TransferServerCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    TransferServerCommand& operator=(TransferServerCommand const&);
    TransferServerCommand(TransferServerCommand const&);
    TransferServerCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransferServerCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Player const* _findTarget(class CommandOutput&, class Level&, std::string const&) const;

    // NOLINTEND
};
