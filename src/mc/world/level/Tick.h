#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    using Type = uint64;

    Type t;

    constexpr operator Type() const { return t; } // NOLINT

    constexpr Tick(Type v) : t(v){}; // NOLINT

    constexpr Tick(Tick const& v) = default;

    constexpr Tick() : t(0){};

public:
    // NOLINTBEGIN
    // symbol: ?MAX@Tick@@2U1@B
    MCAPI static struct Tick const MAX;

    // NOLINTEND
};
