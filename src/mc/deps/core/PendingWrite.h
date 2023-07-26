#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct PendingWrite {

public:
    // prevent constructor by default
    PendingWrite& operator=(PendingWrite const&) = delete;
    PendingWrite(PendingWrite const&)            = delete;
    PendingWrite()                               = delete;
};

}; // namespace Core
