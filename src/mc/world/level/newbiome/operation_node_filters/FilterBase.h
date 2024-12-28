#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeFilters {

template <int T0, int T1, typename T2, typename T3>
struct FilterBase {
public:
    // prevent constructor by default
    FilterBase& operator=(FilterBase const&);
    FilterBase(FilterBase const&);
    FilterBase();
};

} // namespace OperationNodeFilters
