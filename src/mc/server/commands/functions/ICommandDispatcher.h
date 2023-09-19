#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICommandDispatcher {
public:
    // prevent constructor by default
    ICommandDispatcher& operator=(ICommandDispatcher const&);
    ICommandDispatcher(ICommandDispatcher const&);
    ICommandDispatcher();
};
