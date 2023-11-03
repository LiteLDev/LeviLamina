#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    uint64 id;

    [[nodiscard]] constexpr ActorRuntimeID() : id(0) {}
    [[nodiscard]] constexpr ActorRuntimeID(uint64 x) : id(x) {} // NOLINT

    [[nodiscard]] constexpr operator uint64() const { return id; } // NOLINT
};
