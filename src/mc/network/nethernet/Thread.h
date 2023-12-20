#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct Thread {
public:
    // prevent constructor by default
    Thread& operator=(Thread const&);
    Thread(Thread const&);
    Thread();

public:
    // NOLINTBEGIN
    // symbol: ?SetThreadName@Thread@NetherNet@@SAXPEAXPEBD@Z
    MCAPI static void SetThreadName(void*, char const*);

    // NOLINTEND
};

}; // namespace NetherNet
