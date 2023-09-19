#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class LifetimeRegistry {
public:
    // prevent constructor by default
    LifetimeRegistry& operator=(LifetimeRegistry const&);
    LifetimeRegistry(LifetimeRegistry const&);
    LifetimeRegistry();
};

}; // namespace Scripting
