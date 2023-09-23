#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {
public:
    // prevent constructor by default
    DirtyTicksCounter& operator=(DirtyTicksCounter const&);
    DirtyTicksCounter(DirtyTicksCounter const&);

public:
    // NOLINTBEGIN
    // symbol: ??0DirtyTicksCounter@@QEAA@XZ
    MCAPI DirtyTicksCounter();

    // symbol: ?getTicksSinceLastChange@DirtyTicksCounter@@QEBAHXZ
    MCAPI int getTicksSinceLastChange() const;

    // symbol: ?getTotalDirtyTicks@DirtyTicksCounter@@QEBAHXZ
    MCAPI int getTotalDirtyTicks() const;

    // symbol: ??EDirtyTicksCounter@@QEAAAEAU0@XZ
    MCAPI struct DirtyTicksCounter& operator++();

    // symbol: ?reset@DirtyTicksCounter@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?touch@DirtyTicksCounter@@QEAAXXZ
    MCAPI void touch();

    // symbol: ?max@DirtyTicksCounter@@SA?AU1@XZ
    MCAPI static struct DirtyTicksCounter max();

    // NOLINTEND
};
