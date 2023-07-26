#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class OptionalComponentWrapper {

public:
    // prevent constructor by default
    OptionalComponentWrapper& operator=(OptionalComponentWrapper const&) = delete;
    OptionalComponentWrapper(OptionalComponentWrapper const&)            = delete;
    OptionalComponentWrapper()                                           = delete;
};
