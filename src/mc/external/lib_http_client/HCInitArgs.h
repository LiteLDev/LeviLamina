#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HCInitArgs {
public:
    // prevent constructor by default
    HCInitArgs& operator=(HCInitArgs const&);
    HCInitArgs(HCInitArgs const&);
    HCInitArgs();
};
