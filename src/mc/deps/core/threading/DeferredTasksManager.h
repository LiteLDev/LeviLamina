#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class DeferredTasksManager {
public:
    // prevent constructor by default
    DeferredTasksManager& operator=(DeferredTasksManager const&);
    DeferredTasksManager(DeferredTasksManager const&);
    DeferredTasksManager();
};
