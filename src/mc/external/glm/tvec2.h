#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template<typename T0, int T1>
struct tvec2 {
public:
    // prevent constructor by default
    tvec2& operator=(tvec2 const &);
    tvec2(tvec2 const &);
    tvec2();

};

};
