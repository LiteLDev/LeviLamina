#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HoneyBlockFlag {
public:
    // prevent constructor by default
    HoneyBlockFlag& operator=(HoneyBlockFlag const&);
    HoneyBlockFlag(HoneyBlockFlag const&);
    HoneyBlockFlag();
};
