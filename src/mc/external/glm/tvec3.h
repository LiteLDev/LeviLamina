#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template<typename T0, int T1>
struct tvec3 {
public:
    // prevent constructor by default
    tvec3& operator=(tvec3 const &);
    tvec3(tvec3 const &);
    tvec3();

};

};
