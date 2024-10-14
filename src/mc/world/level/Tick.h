#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    using Type = uint64;

    Type t;

    [[nodiscard]] constexpr operator Type() const noexcept { return t; } // NOLINT

    [[nodiscard]] constexpr Tick(Type v) noexcept : t(v) {}; // NOLINT

    [[nodiscard]] constexpr Tick(Tick const& v) = default;

    [[nodiscard]] constexpr Tick() noexcept : t(0) {};

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct Tick const& MAX();

    // NOLINTEND
};
