#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class LifetimeRegistry {

public:
    // prevent constructor by default
    LifetimeRegistry& operator=(LifetimeRegistry const&) = delete;
    LifetimeRegistry(LifetimeRegistry const&)            = delete;
    LifetimeRegistry()                                   = delete;
};

}; // namespace Scripting
