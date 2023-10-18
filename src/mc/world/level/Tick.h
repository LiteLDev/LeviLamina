#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    uint64 t;

    constexpr operator uint64() const { return t; } // NOLINT

    constexpr Tick(uint64 v) : t(v){}; // NOLINT

    constexpr Tick(Tick const& v) = default;

    constexpr Tick() : t(0){};

public:
    // NOLINTBEGIN
    // symbol: ?MAX@Tick@@2U1@B
    MCAPI static struct Tick const MAX;

    // NOLINTEND
};
