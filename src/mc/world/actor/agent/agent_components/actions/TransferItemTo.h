#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct TransferItemTo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> src;
    ::ll::TypedStorage<4, 4, int> dest;
    ::ll::TypedStorage<4, 4, int> quantity;
    // NOLINTEND
};

} // namespace AgentComponents::Actions
