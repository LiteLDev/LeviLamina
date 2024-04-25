#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListenerInfo {
public:
    // prevent constructor by default
    ListenerInfo& operator=(ListenerInfo const&);
    ListenerInfo(ListenerInfo const&);
    ListenerInfo();

    // private:
    // NOLINTBEGIN
    // symbol: ?SQRT_FLT_MAX@ListenerInfo@@0MB
    MCAPI static float const SQRT_FLT_MAX;

    // NOLINTEND
};
