#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class Mutex {
public:
    // prevent constructor by default
    Mutex& operator=(Mutex const&);
    Mutex(Mutex const&);
    Mutex();

public:
    // NOLINTBEGIN
    // symbol: ??1Mutex@Threading@Bedrock@@QEAA@XZ
    MCAPI ~Mutex();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
