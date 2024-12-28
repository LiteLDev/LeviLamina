#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg::math {

template <typename T0>
struct Rect {
public:
    // prevent constructor by default
    Rect& operator=(Rect const&);
    Rect(Rect const&);
    Rect();
};

} // namespace cg::math
