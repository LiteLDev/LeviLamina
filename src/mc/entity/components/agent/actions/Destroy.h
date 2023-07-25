#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Destroy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_DESTROY
public:
    Destroy& operator=(Destroy const&) = delete;
    Destroy(Destroy const&)            = delete;
    Destroy()                          = delete;
#endif

public:
};

}; // namespace AgentComponents::Actions
