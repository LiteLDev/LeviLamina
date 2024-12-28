#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

template <typename T0, typename T1, typename T2>
class flat_set {
public:
    // prevent constructor by default
    flat_set& operator=(flat_set const&);
    flat_set(flat_set const&);
    flat_set();
};

} // namespace brstd
