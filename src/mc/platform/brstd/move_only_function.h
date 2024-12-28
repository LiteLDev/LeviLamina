#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

template <typename T0>
class move_only_function {
public:
    // prevent constructor by default
    move_only_function& operator=(move_only_function const&);
    move_only_function(move_only_function const&);
    move_only_function();
};

} // namespace brstd
