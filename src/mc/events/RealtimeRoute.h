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
};

}; // namespace Social::Events
