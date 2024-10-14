#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemChargeEvent {
public:
    // prevent constructor by default
    ItemChargeEvent& operator=(ItemChargeEvent const&);
    ItemChargeEvent();

public:
    // NOLINTBEGIN
    MCAPI ItemChargeEvent(struct ItemChargeEvent&&);

    MCAPI ItemChargeEvent(struct ItemChargeEvent const&);

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
