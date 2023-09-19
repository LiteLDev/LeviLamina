#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct _TP_TIMER {
public:
    // prevent constructor by default
    _TP_TIMER& operator=(_TP_TIMER const&);
    _TP_TIMER(_TP_TIMER const&);
    _TP_TIMER();
};
