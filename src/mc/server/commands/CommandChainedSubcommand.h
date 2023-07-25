#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandChainedSubcommand {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDCHAINEDSUBCOMMAND
public:
    CommandChainedSubcommand& operator=(CommandChainedSubcommand const&) = delete;
    CommandChainedSubcommand(CommandChainedSubcommand const&)            = delete;
    CommandChainedSubcommand()                                           = delete;
#endif

public:
    /**
     * @symbol ?getCommand\@CommandChainedSubcommand\@\@QEBAPEBVCommand\@\@XZ
     */
    MCAPI class Command const* getCommand() const;
};
