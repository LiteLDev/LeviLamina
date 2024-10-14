#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotData {
public:
    // prevent constructor by default
    SlotData& operator=(SlotData const&);
    SlotData(SlotData const&);

public:
    // NOLINTBEGIN
    MCAPI SlotData();

    MCAPI ~SlotData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static struct SlotData& UNKNOWN_LOCATION();

    // NOLINTEND
};
