#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class WeakLifetimeScope {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_WEAKLIFETIMESCOPE
public:
    WeakLifetimeScope& operator=(WeakLifetimeScope const&) = delete;
    WeakLifetimeScope(WeakLifetimeScope const&)            = delete;
    WeakLifetimeScope()                                    = delete;
#endif

public:
};

}; // namespace Scripting
