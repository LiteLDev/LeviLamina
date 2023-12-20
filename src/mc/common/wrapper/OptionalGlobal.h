#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class OptionalGlobal {
public:
    // prevent constructor by default
    OptionalGlobal& operator=(OptionalGlobal const&);
    OptionalGlobal(OptionalGlobal const&);
    OptionalGlobal();
};
