#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template <typename T0, int T1>
struct qua {

public:
    // prevent constructor by default
    qua& operator=(qua const&) = delete;
    qua(qua const&)            = delete;
    qua()                      = delete;
};

}; // namespace glm
