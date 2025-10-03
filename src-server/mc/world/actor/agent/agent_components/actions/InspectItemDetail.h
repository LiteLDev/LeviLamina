#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectItemDetail {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5889fb;
    // NOLINTEND

public:
    // prevent constructor by default
    InspectItemDetail& operator=(InspectItemDetail const&);
    InspectItemDetail(InspectItemDetail const&);
    InspectItemDetail();
};

} // namespace AgentComponents::Actions
