#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {

public:
    uint64_t t;

    constexpr explicit operator uint64_t() const { return t; }

    constexpr explicit operator uint64_t&() { return t; }

    constexpr explicit Tick(uint64_t v) : t(v){};

    constexpr Tick(const Tick& v) = default;

    constexpr Tick() : t(0){};

    /**
     * @symbol ?MAX\@Tick\@\@2U1\@B
     */
    MCAPI static struct Tick const MAX; // NOLINT
};
