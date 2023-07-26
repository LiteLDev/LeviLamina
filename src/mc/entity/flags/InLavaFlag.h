#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InLavaFlag {

public:
    // prevent constructor by default
    InLavaFlag& operator=(InLavaFlag const&) = delete;
    InLavaFlag(InLavaFlag const&)            = delete;
    InLavaFlag()                             = delete;
};
