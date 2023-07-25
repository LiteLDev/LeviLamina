#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandSyntaxInformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSYNTAXINFORMATION
public:
    CommandSyntaxInformation& operator=(CommandSyntaxInformation const&) = delete;
    CommandSyntaxInformation(CommandSyntaxInformation const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CommandSyntaxInformation\@\@QEAA\@XZ
     */
    MCAPI CommandSyntaxInformation();
    /**
     * @symbol ??1CommandSyntaxInformation\@\@QEAA\@XZ
     */
    MCAPI ~CommandSyntaxInformation();
};
