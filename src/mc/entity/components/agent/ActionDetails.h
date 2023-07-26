#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ActionDetails {

public:
    // prevent constructor by default
    ActionDetails& operator=(ActionDetails const&) = delete;
    ActionDetails(ActionDetails const&)            = delete;
    ActionDetails()                                = delete;
};

}; // namespace AgentComponents
