#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct Thread : public ::std::thread {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void SetThreadName(void* handle, char const* name);
    // NOLINTEND
};

} // namespace NetherNet
