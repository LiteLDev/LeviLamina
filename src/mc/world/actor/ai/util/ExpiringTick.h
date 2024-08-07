#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExpiringTick {
public:
    // prevent constructor by default
    ExpiringTick& operator=(ExpiringTick const&);
    ExpiringTick(ExpiringTick const&);
    ExpiringTick();

public:
    // NOLINTBEGIN
    MCAPI ExpiringTick(struct Tick currentTick, ushort);

    MCAPI struct Tick getExpireAtTick() const;

    MCAPI float getNormalizedElapsedTime(struct Tick const& currentTick) const;

    MCAPI bool isActive(struct Tick currentTick) const;

    MCAPI bool isExpired(struct Tick currentTick) const;

    // NOLINTEND
};
