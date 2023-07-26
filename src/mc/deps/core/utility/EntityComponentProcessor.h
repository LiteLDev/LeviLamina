#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class EntityComponentProcessor {

public:
    // prevent constructor by default
    EntityComponentProcessor& operator=(EntityComponentProcessor const&) = delete;
    EntityComponentProcessor(EntityComponentProcessor const&)            = delete;
    EntityComponentProcessor()                                           = delete;
};

}; // namespace Util
