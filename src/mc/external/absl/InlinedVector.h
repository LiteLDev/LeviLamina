#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

template <typename T0, int T1, typename T2>
class InlinedVector {
public:
    // prevent constructor by default
    InlinedVector& operator=(InlinedVector const&);
    InlinedVector(InlinedVector const&);
    InlinedVector();
};

} // namespace absl
