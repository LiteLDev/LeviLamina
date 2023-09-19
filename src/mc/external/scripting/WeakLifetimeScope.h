#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class WeakLifetimeScope {
public:
    // prevent constructor by default
    WeakLifetimeScope& operator=(WeakLifetimeScope const&);
    WeakLifetimeScope(WeakLifetimeScope const&);
    WeakLifetimeScope();
};

}; // namespace Scripting
