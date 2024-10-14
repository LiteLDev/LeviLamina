#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicTimeAccumulator {
public:
    // prevent constructor by default
    AtomicTimeAccumulator& operator=(AtomicTimeAccumulator const&);
    AtomicTimeAccumulator(AtomicTimeAccumulator const&);

public:
    // NOLINTBEGIN
    MCAPI AtomicTimeAccumulator();

    MCAPI void addTime(std::chrono::nanoseconds const& time);

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
