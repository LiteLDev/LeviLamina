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
    MCAPI static float const SQRT_FLT_MAX;

    // NOLINTEND
};
