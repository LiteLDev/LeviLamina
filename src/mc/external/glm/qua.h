#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template <typename T0, int T1>
struct qua {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLM_QUA
public:
    qua& operator=(qua const&) = delete;
    qua(qua const&)            = delete;
    qua()                      = delete;
#endif

public:
};

}; // namespace glm
