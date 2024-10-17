#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GuardianFlag {
public:
    // prevent constructor by default
    GuardianFlag& operator=(GuardianFlag const&);
    GuardianFlag(GuardianFlag const&);
    GuardianFlag();
};
