#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template <int32_t T0, int32_t T1, typename T2, int32_t T3>
struct mat {

public:
    // prevent constructor by default
    mat& operator=(mat const&) = delete;
    mat(mat const&)            = delete;
    mat()                      = delete;
};

}; // namespace glm
