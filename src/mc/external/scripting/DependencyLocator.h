#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class DependencyLocator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_DEPENDENCYLOCATOR
public:
    DependencyLocator& operator=(DependencyLocator const&) = delete;
    DependencyLocator(DependencyLocator const&)            = delete;
    DependencyLocator()                                    = delete;
#endif

public:
};

}; // namespace Scripting
