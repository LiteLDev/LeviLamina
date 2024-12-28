#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ListenerState {
public:
    // prevent constructor by default
    ListenerState& operator=(ListenerState const&);
    ListenerState(ListenerState const&);
    ListenerState();
};
