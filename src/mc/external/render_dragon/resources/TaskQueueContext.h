#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct TaskQueueContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb9a598;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueueContext& operator=(TaskQueueContext const&);
    TaskQueueContext(TaskQueueContext const&);
    TaskQueueContext();
};

} // namespace dragon
