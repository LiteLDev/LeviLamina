#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    [[nodiscard]] constexpr bool operator==(Tick const& other) const noexcept { return tickID == other.tickID; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(Tick const& other) const noexcept {
        return tickID <=> other.tickID;
    }

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> tickID;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Tick const& MAX();
    // NOLINTEND
};
