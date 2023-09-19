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
    // symbol: ?getCommand@CommandChainedSubcommand@@QEBAPEBVCommand@@XZ
    MCAPI class Command const* getCommand() const;

    // NOLINTEND
};
