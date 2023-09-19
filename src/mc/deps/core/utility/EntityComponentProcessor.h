#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class EntityComponentProcessor {
public:
    // prevent constructor by default
    EntityComponentProcessor& operator=(EntityComponentProcessor const&);
    EntityComponentProcessor(EntityComponentProcessor const&);
    EntityComponentProcessor();
};

}; // namespace Util
