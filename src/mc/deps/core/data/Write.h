#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Write {
public:
    // prevent constructor by default
    Write& operator=(Write const&);
    Write(Write const&);
    Write();
};
