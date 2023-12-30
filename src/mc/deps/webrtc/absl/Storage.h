#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::inlined_vector_internal {

template <typename T0, int T1, typename T2>
class Storage {
public:
    // prevent constructor by default
    Storage& operator=(Storage const&);
    Storage(Storage const&);
    Storage();
};

}; // namespace absl::inlined_vector_internal
