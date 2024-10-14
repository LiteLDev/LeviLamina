#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListenerInfo {
public:
    // prevent constructor by default
    ListenerInfo& operator=(ListenerInfo const&);
    ListenerInfo(ListenerInfo const&);
    ListenerInfo();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static float const& SQRT_FLT_MAX();

    // NOLINTEND
};
