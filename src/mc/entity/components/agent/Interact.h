#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Interact {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_INTERACT
public:
    Interact& operator=(Interact const&) = delete;
    Interact(Interact const&)            = delete;
    Interact()                           = delete;
#endif

public:
};

}; // namespace AgentComponents
