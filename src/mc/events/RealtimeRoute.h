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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Social::Events
