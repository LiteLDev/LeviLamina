#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Write {

public:
    // prevent constructor by default
    Write& operator=(Write const&) = delete;
    Write(Write const&)            = delete;
    Write()                        = delete;
};
