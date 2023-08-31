#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template <int32_t T0, typename T1, int32_t T2>
struct vec {

public:
    // prevent constructor by default
    vec& operator=(vec const&) = delete;
    vec(vec const&)            = delete;
    vec()                      = delete;
};

}; // namespace glm
