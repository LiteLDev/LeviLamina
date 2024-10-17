#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CamelFlag {
public:
    // prevent constructor by default
    CamelFlag& operator=(CamelFlag const&);
    CamelFlag(CamelFlag const&);
    CamelFlag();
};
