#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectItemCount {

public:
    // prevent constructor by default
    InspectItemCount& operator=(InspectItemCount const&) = delete;
    InspectItemCount(InspectItemCount const&)            = delete;
    InspectItemCount()                                   = delete;
};

}; // namespace AgentComponents::Actions
