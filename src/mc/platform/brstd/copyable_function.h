#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

template <typename T0>
class copyable_function {
public:
    // prevent constructor by default
    copyable_function& operator=(copyable_function const&);
    copyable_function(copyable_function const&);
    copyable_function();
};

}; // namespace brstd
