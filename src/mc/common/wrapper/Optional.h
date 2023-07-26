#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class Optional {

public:
    // prevent constructor by default
    Optional& operator=(Optional const&) = delete;
    Optional(Optional const&)            = delete;
    Optional()                           = delete;
};
