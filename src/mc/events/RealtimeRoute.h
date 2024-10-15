#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class RealtimeRoute {
public:
    // prevent constructor by default
    RealtimeRoute& operator=(RealtimeRoute const&);
    RealtimeRoute(RealtimeRoute const&);

public:
    // NOLINTBEGIN
    MCAPI RealtimeRoute();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};

}; // namespace Social::Events
