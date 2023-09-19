#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectItemDetail {
public:
    // prevent constructor by default
    InspectItemDetail& operator=(InspectItemDetail const&);
    InspectItemDetail(InspectItemDetail const&);
    InspectItemDetail();
};

}; // namespace AgentComponents::Actions
