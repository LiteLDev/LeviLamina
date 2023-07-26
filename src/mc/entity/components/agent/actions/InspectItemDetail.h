#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectItemDetail {

public:
    // prevent constructor by default
    InspectItemDetail& operator=(InspectItemDetail const&) = delete;
    InspectItemDetail(InspectItemDetail const&)            = delete;
    InspectItemDetail()                                    = delete;
};

}; // namespace AgentComponents::Actions
