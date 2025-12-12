#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Remapping {

struct Action {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk75e715;
    ::ll::UntypedStorage<8, 8> mUnk63bae5;
    // NOLINTEND

public:
    // prevent constructor by default
    Action& operator=(Action const&);
    Action(Action const&);
    Action();
};

} // namespace Remapping
