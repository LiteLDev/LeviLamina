#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    uint64 t;

    constexpr explicit operator uint64() const { return t; }

    constexpr explicit operator uint64&() { return t; }

    constexpr explicit Tick(uint64 v) : t(v){};

    constexpr Tick(const Tick& v) = default;

    constexpr Tick() : t(0){};

public:
    // NOLINTBEGIN
    // symbol: ?MAX@Tick@@2U1@B
    MCAPI static struct Tick const MAX;

    // NOLINTEND
};
