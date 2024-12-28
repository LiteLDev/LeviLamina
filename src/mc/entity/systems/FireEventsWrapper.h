#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FireEventsWrapper {
public:
    // prevent constructor by default
    FireEventsWrapper& operator=(FireEventsWrapper const&);
    FireEventsWrapper(FireEventsWrapper const&);
    FireEventsWrapper();
};
