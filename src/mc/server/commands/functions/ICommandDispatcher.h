#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICommandDispatcher {

public:
    // prevent constructor by default
    ICommandDispatcher& operator=(ICommandDispatcher const&) = delete;
    ICommandDispatcher(ICommandDispatcher const&)            = delete;
    ICommandDispatcher()                                     = delete;
};
