#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct Thread : public ::std::thread {
public:
    // prevent constructor by default
    Thread& operator=(Thread const&);
    Thread(Thread const&);
    Thread();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void SetThreadName(void* handle, char const* name);
    // NOLINTEND
};

} // namespace NetherNet
