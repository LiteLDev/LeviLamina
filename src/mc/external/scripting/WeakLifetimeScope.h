#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class WeakLifetimeScope {

public:
    // prevent constructor by default
    WeakLifetimeScope& operator=(WeakLifetimeScope const&) = delete;
    WeakLifetimeScope(WeakLifetimeScope const&)            = delete;
    WeakLifetimeScope()                                    = delete;
};

}; // namespace Scripting
