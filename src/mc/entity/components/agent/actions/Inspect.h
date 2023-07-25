#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Inspect {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_INSPECT
public:
    Inspect& operator=(Inspect const&) = delete;
    Inspect(Inspect const&)            = delete;
    Inspect()                          = delete;
#endif

public:
};

}; // namespace AgentComponents::Actions
