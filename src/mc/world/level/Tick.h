#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    using Type = uint64;

    Type t;

    [[nodiscard]] constexpr operator Type() const { return t; } // NOLINT

    [[nodiscard]] constexpr Tick(Type v) : t(v){}; // NOLINT

    [[nodiscard]] constexpr Tick(Tick const& v) = default;

    [[nodiscard]] constexpr Tick() : t(0){};

public:
    // NOLINTBEGIN
    // symbol: ?MAX@Tick@@2U1@B
    MCAPI static struct Tick const MAX;

    // NOLINTEND
};
