#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

struct ThreadPoolActionStatus {
public:
    // prevent constructor by default
    ThreadPoolActionStatus& operator=(ThreadPoolActionStatus const&);
    ThreadPoolActionStatus(ThreadPoolActionStatus const&);
    ThreadPoolActionStatus();
};

}; // namespace OS
