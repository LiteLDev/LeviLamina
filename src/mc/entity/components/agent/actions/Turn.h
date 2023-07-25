#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Turn {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_TURN
public:
    Turn& operator=(Turn const&) = delete;
    Turn(Turn const&)            = delete;
    Turn()                       = delete;
#endif

public:
};

}; // namespace AgentComponents::Actions
