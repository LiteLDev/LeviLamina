#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandChainedSubcommand {

public:
    // prevent constructor by default
    CommandChainedSubcommand& operator=(CommandChainedSubcommand const&) = delete;
    CommandChainedSubcommand(CommandChainedSubcommand const&)            = delete;
    CommandChainedSubcommand()                                           = delete;

public:
    /**
     * @symbol ?getCommand\@CommandChainedSubcommand\@\@QEBAPEBVCommand\@\@XZ
     */
    MCAPI class Command const* getCommand() const; // NOLINT
};
