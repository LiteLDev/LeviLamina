#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Collect {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_COLLECT
public:
    Collect& operator=(Collect const&) = delete;
    Collect(Collect const&)            = delete;
    Collect()                          = delete;
#endif

public:
};

}; // namespace AgentComponents::Actions
