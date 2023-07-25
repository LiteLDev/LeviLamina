#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Drop {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_DROP
public:
    Drop& operator=(Drop const&) = delete;
    Drop(Drop const&)            = delete;
    Drop()                       = delete;
#endif

public:
};

}; // namespace AgentComponents::Actions
