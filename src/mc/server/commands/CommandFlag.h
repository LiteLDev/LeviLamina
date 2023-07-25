#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDFLAG
public:
    CommandFlag& operator=(CommandFlag const&) = delete;
    CommandFlag(CommandFlag const&)            = delete;
    CommandFlag()                              = delete;
#endif

public:
};
