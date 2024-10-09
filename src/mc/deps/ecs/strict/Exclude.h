#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Exclude {
public:
    // prevent constructor by default
    Exclude& operator=(Exclude const&);
    Exclude(Exclude const&);
    Exclude();
};
