#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ActionDetails {
public:
    // prevent constructor by default
    ActionDetails& operator=(ActionDetails const&);
    ActionDetails(ActionDetails const&);
    ActionDetails();
};

}; // namespace AgentComponents
