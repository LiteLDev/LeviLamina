#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template <int T0, int T1, typename T2, int T3>
struct mat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLM_MAT
public:
    mat& operator=(mat const&) = delete;
    mat(mat const&)            = delete;
    mat()                      = delete;
#endif

public:
};

}; // namespace glm
