#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectData {
public:
    // prevent constructor by default
    InspectData& operator=(InspectData const&);
    InspectData(InspectData const&);
    InspectData();
};

}; // namespace AgentComponents::Actions
