#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandChainedSubcommand {
public:
    // prevent constructor by default
    CommandChainedSubcommand& operator=(CommandChainedSubcommand const&);
    CommandChainedSubcommand(CommandChainedSubcommand const&);
    CommandChainedSubcommand();

public:
    // NOLINTBEGIN
    MCAPI class Command const* getCommand() const;

    MCAPI void setCommand(std::unique_ptr<class Command> command);

    // NOLINTEND
};
