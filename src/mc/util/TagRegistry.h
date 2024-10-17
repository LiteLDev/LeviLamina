#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class TagRegistry {
public:
    // prevent constructor by default
    TagRegistry& operator=(TagRegistry const&);
    TagRegistry(TagRegistry const&);
    TagRegistry();
};
