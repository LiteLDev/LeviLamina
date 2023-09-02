#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    uint64 id;

    constexpr ActorRuntimeID() : id(0) {}
    constexpr ActorRuntimeID(uint64 x) : id(x) {} // NOLINT

    constexpr operator uint64() const { return id; } // NOLINT
};
