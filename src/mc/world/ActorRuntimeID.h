#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {

public:
    uint64_t id;

    constexpr ActorRuntimeID() : id(0) {}
    constexpr ActorRuntimeID(uint64_t x) : id(x) {} // NOLINT

    constexpr operator uint64_t() const { return id; } // NOLINT
};
