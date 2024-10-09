#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InLavaFlag {
public:
    // prevent constructor by default
    InLavaFlag& operator=(InLavaFlag const&);
    InLavaFlag(InLavaFlag const&);
    InLavaFlag();
};
