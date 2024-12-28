#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NoPermanentSkip {
public:
    // prevent constructor by default
    NoPermanentSkip& operator=(NoPermanentSkip const&);
    NoPermanentSkip(NoPermanentSkip const&);
    NoPermanentSkip();
};
