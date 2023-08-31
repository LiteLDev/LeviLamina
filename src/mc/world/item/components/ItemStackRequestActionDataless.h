#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int32_t T0>
class ItemStackRequestActionDataless {

public:
    // prevent constructor by default
    ItemStackRequestActionDataless& operator=(ItemStackRequestActionDataless const&) = delete;
    ItemStackRequestActionDataless(ItemStackRequestActionDataless const&)            = delete;
    ItemStackRequestActionDataless()                                                 = delete;
};
