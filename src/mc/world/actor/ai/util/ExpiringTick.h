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
    // symbol: ??0ExpiringTick@@QEAA@UTick@@G@Z
    MCAPI ExpiringTick(struct Tick currentTick, ushort);

    // symbol: ?getExpireAtTick@ExpiringTick@@QEBA?AUTick@@XZ
    MCAPI struct Tick getExpireAtTick() const;

    // symbol: ?getNormalizedElapsedTime@ExpiringTick@@QEBAMAEBUTick@@@Z
    MCAPI float getNormalizedElapsedTime(struct Tick const& currentTick) const;

    // symbol: ?isActive@ExpiringTick@@QEBA_NUTick@@@Z
    MCAPI bool isActive(struct Tick currentTick) const;

    // symbol: ?isExpired@ExpiringTick@@QEBA_NUTick@@@Z
    MCAPI bool isExpired(struct Tick currentTick) const;

    // NOLINTEND
};
