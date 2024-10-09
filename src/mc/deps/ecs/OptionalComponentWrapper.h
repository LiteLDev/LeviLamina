#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class OptionalComponentWrapper {
public:
    // prevent constructor by default
    OptionalComponentWrapper& operator=(OptionalComponentWrapper const&);
    OptionalComponentWrapper(OptionalComponentWrapper const&);
    OptionalComponentWrapper();
};
