#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class CommandSelector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSELECTOR
public:
    CommandSelector& operator=(CommandSelector const&) = delete;
    CommandSelector(CommandSelector const&)            = delete;
    CommandSelector()                                  = delete;
#endif

public:
};
