#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ActionDetails {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONDETAILS
public:
    ActionDetails& operator=(ActionDetails const&) = delete;
    ActionDetails(ActionDetails const&)            = delete;
    ActionDetails()                                = delete;
#endif

public:
};

}; // namespace AgentComponents
