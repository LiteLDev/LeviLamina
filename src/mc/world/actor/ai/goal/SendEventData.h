#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventData {
public:
    // prevent constructor by default
    SendEventData();

public:
    // NOLINTBEGIN
    MCAPI SendEventData(struct SendEventData const&);

    MCAPI struct SendEventData& operator=(struct SendEventData const&);

    MCAPI ~SendEventData();

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
