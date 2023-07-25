#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ExecutingFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_EXECUTINGFLAG
public:
    ExecutingFlag& operator=(ExecutingFlag const&) = delete;
    ExecutingFlag(ExecutingFlag const&)            = delete;
    ExecutingFlag()                                = delete;
#endif

public:
};

}; // namespace AgentComponents
