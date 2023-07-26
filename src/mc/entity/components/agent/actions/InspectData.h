#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectData {

public:
    // prevent constructor by default
    InspectData& operator=(InspectData const&) = delete;
    InspectData(InspectData const&)            = delete;
    InspectData()                              = delete;
};

}; // namespace AgentComponents::Actions
