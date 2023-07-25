#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template <int T0, typename T1, int T2>
struct vec {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLM_VEC
public:
    vec& operator=(vec const&) = delete;
    vec(vec const&)            = delete;
    vec()                      = delete;
#endif

public:
};

}; // namespace glm
