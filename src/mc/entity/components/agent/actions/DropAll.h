#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct DropAll {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_DROPALL
public:
    DropAll& operator=(DropAll const&) = delete;
    DropAll(DropAll const&)            = delete;
    DropAll()                          = delete;
#endif

public:
};

}; // namespace AgentComponents::Actions
