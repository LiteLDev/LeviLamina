#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class LifetimeRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_LIFETIMEREGISTRY
public:
    LifetimeRegistry& operator=(LifetimeRegistry const&) = delete;
    LifetimeRegistry(LifetimeRegistry const&)            = delete;
    LifetimeRegistry()                                   = delete;
#endif

public:
};

}; // namespace Scripting
