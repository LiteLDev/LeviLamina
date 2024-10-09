#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VexFlag {
public:
    // prevent constructor by default
    VexFlag& operator=(VexFlag const&);
    VexFlag(VexFlag const&);
    VexFlag();
};
