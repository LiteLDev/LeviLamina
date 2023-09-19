#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectItemCount {
public:
    // prevent constructor by default
    InspectItemCount& operator=(InspectItemCount const&);
    InspectItemCount(InspectItemCount const&);
    InspectItemCount();
};

}; // namespace AgentComponents::Actions
