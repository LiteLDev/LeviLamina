#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Command.h"

class CommandChainedSubcommand {
public:
    std::unique_ptr<Command> mCommand; // this+0x8

public:
    // NOLINTBEGIN
    MCAPI class Command const* getCommand() const;

    // vIndex: 0
    virtual ~ExecuteChainedSubcommand() = default;

    // vIndex: 1
    virtual std::string getCommandName() const = 0;

    // NOLINTEND
};
