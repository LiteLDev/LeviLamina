#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NeedSetPreviousPosition {
public:
    // prevent constructor by default
    NeedSetPreviousPosition& operator=(NeedSetPreviousPosition const&);
    NeedSetPreviousPosition(NeedSetPreviousPosition const&);
    NeedSetPreviousPosition();
};
