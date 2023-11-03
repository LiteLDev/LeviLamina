#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {
public:
    int64 id;
    ActorUniqueID() { id = -1; }

    explicit ActorUniqueID(int64 i) { id = i; }

    [[nodiscard]] constexpr int64 get() const { return id; }

    [[nodiscard]] constexpr operator int64() const { return id; } // NOLINT

public:
    // NOLINTBEGIN
    // symbol: ?INVALID_ID@ActorUniqueID@@2U1@B
    MCAPI static struct ActorUniqueID const INVALID_ID;

    // NOLINTEND
};
