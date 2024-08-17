#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template<typename T0, int T1>
struct tvec4 {
public:
    // prevent constructor by default
    tvec4& operator=(tvec4 const &);
    tvec4(tvec4 const &);
    tvec4();

};

};
