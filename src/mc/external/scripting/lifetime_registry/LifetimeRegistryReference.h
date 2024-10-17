#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class LifetimeRegistryReference {
public:
    // prevent constructor by default
    LifetimeRegistryReference& operator=(LifetimeRegistryReference const&);
    LifetimeRegistryReference(LifetimeRegistryReference const&);
    LifetimeRegistryReference();
};

}; // namespace Scripting
