#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {

public:
    uint64_t id;

    [[nodiscard]] inline uint64_t get() const { return id; }

    inline explicit operator uint64_t() const { return id; }

};
