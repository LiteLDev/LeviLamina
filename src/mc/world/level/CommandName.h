#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandName {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDNAME
public:
    CommandName& operator=(CommandName const&) = delete;
    CommandName(CommandName const&)            = delete;
    CommandName()                              = delete;
#endif

public:
    /**
     * @symbol ??1CommandName\@\@QEAA\@XZ
     */
    MCAPI ~CommandName();
};
