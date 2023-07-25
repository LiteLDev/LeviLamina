#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct PendingWrite {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_PENDINGWRITE
public:
    PendingWrite& operator=(PendingWrite const&) = delete;
    PendingWrite(PendingWrite const&)            = delete;
    PendingWrite()                               = delete;
#endif

public:
};

}; // namespace Core
