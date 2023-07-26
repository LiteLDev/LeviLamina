#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template <int T0, int T1, typename T2, int T3>
struct mat {

public:
    // prevent constructor by default
    mat& operator=(mat const&) = delete;
    mat(mat const&)            = delete;
    mat()                      = delete;
};

}; // namespace glm
