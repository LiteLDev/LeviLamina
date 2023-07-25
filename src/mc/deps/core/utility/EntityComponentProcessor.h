#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class EntityComponentProcessor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_ENTITYCOMPONENTPROCESSOR
public:
    EntityComponentProcessor& operator=(EntityComponentProcessor const&) = delete;
    EntityComponentProcessor(EntityComponentProcessor const&)            = delete;
    EntityComponentProcessor()                                           = delete;
#endif

public:
};

}; // namespace Util
