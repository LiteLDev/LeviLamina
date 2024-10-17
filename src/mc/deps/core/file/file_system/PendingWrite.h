#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct PendingWrite {
public:
    // prevent constructor by default
    PendingWrite& operator=(PendingWrite const&);
    PendingWrite(PendingWrite const&);
    PendingWrite();
};

}; // namespace Core
