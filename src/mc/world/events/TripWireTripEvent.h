#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TripWireTripEvent {
public:
    // prevent constructor by default
    TripWireTripEvent& operator=(TripWireTripEvent const&);
    TripWireTripEvent();

public:
    // NOLINTBEGIN
    MCAPI TripWireTripEvent(struct TripWireTripEvent const&);

    MCAPI ~TripWireTripEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
