#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/Command.h"

class CommandChainedSubcommand {
public:
    std::unique_ptr<Command> mCommand; // this+0x8

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandChainedSubcommand() = default;

    // vIndex: 1
    virtual std::string getCommandName() const = 0;

    MCAPI class Command const* getCommand() const;

    // NOLINTEND
};
