#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Attack {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_ATTACK
public:
    Attack& operator=(Attack const&) = delete;
    Attack(Attack const&)            = delete;
    Attack()                         = delete;
#endif

public:
};

}; // namespace AgentComponents::Actions
