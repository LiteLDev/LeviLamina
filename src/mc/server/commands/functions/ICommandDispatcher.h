#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICommandDispatcher {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICOMMANDDISPATCHER
public:
    ICommandDispatcher& operator=(ICommandDispatcher const&) = delete;
    ICommandDispatcher(ICommandDispatcher const&)            = delete;
    ICommandDispatcher()                                     = delete;
#endif

public:
};
